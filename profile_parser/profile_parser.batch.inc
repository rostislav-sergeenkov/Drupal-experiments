<?php
/**
 * @file
 * Code for the batch operations for Drupal profile parser.
 */

/**
 * Saves profile into node.
 *
 * @param $profile
 */
function profile_parser_save_profile($profile) {
  $node = new stdClass();
  $node->uid = 0;
  $node->status = 1;
  $node->comment = 0;
  $node->promote = 0;
  $node->moderate = 0;
  $node->sticky = 0;
  $node->type = PROFILE_PARSER_CONTENT_TYPE;
  $node->created = REQUEST_TIME;
  $node->changed = REQUEST_TIME;
  $node->language = LANGUAGE_NONE;

  node_object_prepare($node);

  $node->title = $profile['title'];
  $node->field_profile_url[LANGUAGE_NONE][0]['url'] = $profile['url'];
  $node->field_profile_first_name[LANGUAGE_NONE][0]['value'] = $profile['first_name'];
  $node->field_profile_second_name[LANGUAGE_NONE][0]['value'] = $profile['last_name'];
  $node->field_profile_organization[LANGUAGE_NONE][0]['value'] = $profile['organization'];
  $node->field_profile_job_title[LANGUAGE_NONE][0]['value'] = $profile['job_title'];
  $node->field_profile_about[LANGUAGE_NONE][0]['value'] = $profile['interests'];
  $node->field_profile_about[LANGUAGE_NONE][0]['format'] = 'filtered_html';

  node_save($node);
}

/**
 * Parses user profile pages and saves data into nodes.
 *
 * @param $page
 */
function profile_parser_parse_page($page, $operation_details, &$context) {
  $profile_urls = profile_parser_get_user_urls($page['domain'], $page['url']);
  $context['message'] = t('Processing !page, profiles found: !total.',
    array('!page' => $page['url'], '!total' => count($profile_urls)));

  foreach ($profile_urls as $profile_url) {
    $profile = profile_parser_get_profile_data($profile_url);

    if (!empty($profile)) {
      profile_parser_save_profile($profile);
      $context['results'][] = $profile_url;
    }
    else {
      watchdog(
        'profile_parser',
        'Cannot parse user profile: !profile.',
        array('!profile' => l($profile_url, $profile_url))
      );
    }

    if ($page['timeout'] > 0) {
      sleep($page['timeout']);
    }
  }
}

/**
 * Re-parses user profiles (only new profiles get saved).
 *
 * @param $page
 */
function profile_parser_reparse_page($page, $operation_details, &$context) {
  $profile_urls = profile_parser_get_user_urls($page['domain'], $page['url']);
  $context['message'] = t('Processing !page, profiles found: !total.',
    array('!page' => $page['url'], '!total' => count($profile_urls)));

  foreach ($profile_urls as $profile_url) {
    if (!profile_parser_profile_exists($profile_url)) {
      $profile = profile_parser_get_profile_data($profile_url);

      if (!empty($profile)) {
        profile_parser_save_profile($profile);
        $context['results'][] = $profile_url;
      }
      else {
        watchdog(
          'profile_parser',
          'Cannot parse user profile: !profile.',
          array('!profile' => l($profile_url, $profile_url))
        );
      }
    }

    if ($page['timeout'] > 0) {
      sleep($page['timeout']);
    }
  }
}

/**
 * Provides information about the results of batch process.
 *
 * @param $success
 * @param $results
 * @param $operations
 */
function profile_parser_batch_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('@count profiles processed and saved.',
      array('@count' => count($results))));
    drupal_set_message(
      t('Parsing finished successfully, check also !log for details about empty profiles.',
        array('!log' => l(t('database log'), 'admin/reports/dblog'))));
    drupal_goto(PROFILE_PARSER_VIEW);
  }
  else {
    drupal_set_message(t('An error occurred while processing user profiles.'));
  }
}