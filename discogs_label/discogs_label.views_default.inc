<?php

/**
 * Implementation of hook_views_default_views().
 */
function discogs_label_views_default_views() {
  $views = array();
  
 // Exported view: discogs_label
$view = new view;
$view->name = 'discogs_label';
$view->description = 'Discography Label';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Discogs Label';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Discogs Label';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'discogs_table';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Contact Info */
$handler->display->display_options['fields']['field_discog_contactinfo']['id'] = 'field_discog_contactinfo';
$handler->display->display_options['fields']['field_discog_contactinfo']['table'] = 'field_data_field_discog_contactinfo';
$handler->display->display_options['fields']['field_discog_contactinfo']['field'] = 'field_discog_contactinfo';
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_contactinfo']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_contactinfo']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_contactinfo']['field_api_classes'] = 0;
/* Field: Content: Parent Label */
$handler->display->display_options['fields']['field_discog_parentlabel']['id'] = 'field_discog_parentlabel';
$handler->display->display_options['fields']['field_discog_parentlabel']['table'] = 'field_data_field_discog_parentlabel';
$handler->display->display_options['fields']['field_discog_parentlabel']['field'] = 'field_discog_parentlabel';
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_parentlabel']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_parentlabel']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_parentlabel']['field_api_classes'] = 0;
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
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'discogs_label' => 'discogs_label',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'discogs-label';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Discogs Label';
$handler->display->display_options['menu']['name'] = 'main-menu';
$translatables['discogs_label'] = array(
  t('Master'),
  t('Discogs Label'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Name'),
  t('Contact Info'),
  t('Parent Label'),
  t('Page'),
);

  $views[$view->name] = $view;

  return $views;
}
