<?php
/**
 * @file
 * ex_drupal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ex_drupal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ex_drupal_node_info() {
  $items = array(
    'drupal_user' => array(
      'name' => t('Drupal user'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Drupal.org nickname'),
      'help' => '',
    ),
  );
  return $items;
}
