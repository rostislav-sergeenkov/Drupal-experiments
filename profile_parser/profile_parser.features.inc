<?php
/**
 * @file
 * profile_parser.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profile_parser_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function profile_parser_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function profile_parser_node_info() {
  $items = array(
    'drupalcon_user' => array(
      'name' => t('Drupal user profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
