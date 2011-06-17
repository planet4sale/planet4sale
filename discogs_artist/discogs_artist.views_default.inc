<?php

/**
 * Implementation of hook_views_default_views().
 */
function discogs_artist_views_default_views() {
  $views = array();

  // Exported view: discogs_artist
$view = new view;
$view->name = 'discogs_artist';
$view->description = 'Discography Artist';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Discogs Artist';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Discogs Artist';
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
/* Field: Content: Real Name */
$handler->display->display_options['fields']['field_discog_realname']['id'] = 'field_discog_realname';
$handler->display->display_options['fields']['field_discog_realname']['table'] = 'field_data_field_discog_realname';
$handler->display->display_options['fields']['field_discog_realname']['field'] = 'field_discog_realname';
$handler->display->display_options['fields']['field_discog_realname']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_realname']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_realname']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_realname']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_realname']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_realname']['field_api_classes'] = 0;
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
  'discogs_artist' => 'discogs_artist',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'discogs-artist';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Discogs Artist';
$handler->display->display_options['menu']['name'] = 'devel';
$translatables['discogs_artist'] = array(
  t('Master'),
  t('Discogs Artist'),
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
  t('Real Name'),
  t('Page'),
);

  $views[$view->name] = $view;

  return $views;
}