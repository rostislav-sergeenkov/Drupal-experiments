<?php
/**
 * @file
 * ex_drupal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ex_drupal_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_contact_info|node|drupal_user|default';
  $field_group->group_name = 'group_profile_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'drupal_user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_linkedin',
      1 => 'field_profile_google_plus',
      2 => 'field_profile_stackexchange',
      3 => 'field_profile_irc_nick',
      4 => 'field_profile_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'classes' => 'group-profile-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_contact_info|node|drupal_user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_contact_info|node|drupal_user|form';
  $field_group->group_name = 'group_profile_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'drupal_user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_dorg_profile',
      1 => 'field_profile_linkedin',
      2 => 'field_profile_google_plus',
      3 => 'field_profile_stackexchange',
      4 => 'field_profile_irc_nick',
      5 => 'field_profile_twitter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-contact-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_contact_info|node|drupal_user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_personal_info|node|drupal_user|default';
  $field_group->group_name = 'group_profile_personal_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'drupal_user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_full_name',
      1 => 'field_profile_first_name',
      2 => 'field_profile_second_name',
      3 => 'field_profile_dorg_profile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Information',
      'instance_settings' => array(
        'classes' => 'group-profile-personal-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_personal_info|node|drupal_user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_personal_info|node|drupal_user|form';
  $field_group->group_name = 'group_profile_personal_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'drupal_user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_full_name',
      1 => 'field_profile_first_name',
      2 => 'field_profile_second_name',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-personal-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_personal_info|node|drupal_user|form'] = $field_group;

  return $export;
}
