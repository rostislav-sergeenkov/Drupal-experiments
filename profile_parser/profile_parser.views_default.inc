<?php
/**
 * @file
 * profile_parser.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function profile_parser_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'drupalcon_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drupal User Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Drupal User Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view parsed drupal profiles page';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '50, 100, 200, 300, 400, 500';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_profile_first_name' => 'field_profile_first_name',
    'field_profile_second_name' => 'field_profile_second_name',
    'field_profile_job_title' => 'field_profile_job_title',
    'field_profile_organization' => 'field_profile_organization',
    'field_profile_url' => 'field_profile_url',
    'field_profile_about' => 'field_profile_about',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_second_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_job_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_organization' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_about' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total profiles';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nickname';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_profile_first_name']['id'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['field'] = 'field_profile_first_name';
  /* Field: Content: Second Name */
  $handler->display->display_options['fields']['field_profile_second_name']['id'] = 'field_profile_second_name';
  $handler->display->display_options['fields']['field_profile_second_name']['table'] = 'field_data_field_profile_second_name';
  $handler->display->display_options['fields']['field_profile_second_name']['field'] = 'field_profile_second_name';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_profile_organization']['id'] = 'field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['field'] = 'field_profile_organization';
  /* Field: Content: Profile URL */
  $handler->display->display_options['fields']['field_profile_url']['id'] = 'field_profile_url';
  $handler->display->display_options['fields']['field_profile_url']['table'] = 'field_data_field_profile_url';
  $handler->display->display_options['fields']['field_profile_url']['field'] = 'field_profile_url';
  $handler->display->display_options['fields']['field_profile_url']['click_sort_column'] = 'url';
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_profile_about']['id'] = 'field_profile_about';
  $handler->display->display_options['fields']['field_profile_about']['table'] = 'field_data_field_profile_about';
  $handler->display->display_options['fields']['field_profile_about']['field'] = 'field_profile_about';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'drupalcon_user' => 'drupalcon_user',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nickname';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: First Name (field_profile_first_name) */
  $handler->display->display_options['filters']['field_profile_first_name_value']['id'] = 'field_profile_first_name_value';
  $handler->display->display_options['filters']['field_profile_first_name_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['filters']['field_profile_first_name_value']['field'] = 'field_profile_first_name_value';
  $handler->display->display_options['filters']['field_profile_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['operator_id'] = 'field_profile_first_name_value_op';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['operator'] = 'field_profile_first_name_value_op';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['identifier'] = 'field_profile_first_name_value';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Second Name (field_profile_second_name) */
  $handler->display->display_options['filters']['field_profile_second_name_value']['id'] = 'field_profile_second_name_value';
  $handler->display->display_options['filters']['field_profile_second_name_value']['table'] = 'field_data_field_profile_second_name';
  $handler->display->display_options['filters']['field_profile_second_name_value']['field'] = 'field_profile_second_name_value';
  $handler->display->display_options['filters']['field_profile_second_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_second_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_second_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_second_name_value']['expose']['operator_id'] = 'field_profile_second_name_value_op';
  $handler->display->display_options['filters']['field_profile_second_name_value']['expose']['label'] = 'Second Name';
  $handler->display->display_options['filters']['field_profile_second_name_value']['expose']['operator'] = 'field_profile_second_name_value_op';
  $handler->display->display_options['filters']['field_profile_second_name_value']['expose']['identifier'] = 'field_profile_second_name_value';
  $handler->display->display_options['filters']['field_profile_second_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Organization (field_profile_organization) */
  $handler->display->display_options['filters']['field_profile_organization_value']['id'] = 'field_profile_organization_value';
  $handler->display->display_options['filters']['field_profile_organization_value']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['filters']['field_profile_organization_value']['field'] = 'field_profile_organization_value';
  $handler->display->display_options['filters']['field_profile_organization_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_organization_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_organization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['operator_id'] = 'field_profile_organization_value_op';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['operator'] = 'field_profile_organization_value_op';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['identifier'] = 'field_profile_organization_value';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Job Title (field_profile_job_title) */
  $handler->display->display_options['filters']['field_profile_job_title_value']['id'] = 'field_profile_job_title_value';
  $handler->display->display_options['filters']['field_profile_job_title_value']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['filters']['field_profile_job_title_value']['field'] = 'field_profile_job_title_value';
  $handler->display->display_options['filters']['field_profile_job_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_job_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_job_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['operator_id'] = 'field_profile_job_title_value_op';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['operator'] = 'field_profile_job_title_value_op';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['identifier'] = 'field_profile_job_title_value';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: About (field_profile_about) */
  $handler->display->display_options['filters']['field_profile_about_value']['id'] = 'field_profile_about_value';
  $handler->display->display_options['filters']['field_profile_about_value']['table'] = 'field_data_field_profile_about';
  $handler->display->display_options['filters']['field_profile_about_value']['field'] = 'field_profile_about_value';
  $handler->display->display_options['filters']['field_profile_about_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_about_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_about_value']['expose']['operator_id'] = 'field_profile_about_value_op';
  $handler->display->display_options['filters']['field_profile_about_value']['expose']['label'] = 'About';
  $handler->display->display_options['filters']['field_profile_about_value']['expose']['operator'] = 'field_profile_about_value_op';
  $handler->display->display_options['filters']['field_profile_about_value']['expose']['identifier'] = 'field_profile_about_value';
  $handler->display->display_options['filters']['field_profile_about_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/profile_parser/data';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Drupal User Profiles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['drupalcon_users'] = array(
    t('Master'),
    t('Drupal User Profiles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total profiles'),
    t('Nickname'),
    t('First Name'),
    t('Second Name'),
    t('Job Title'),
    t('Organization'),
    t('Profile URL'),
    t('About'),
    t('Page'),
  );
  $export['drupalcon_users'] = $view;

  return $export;
}
