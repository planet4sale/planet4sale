<?php

/**
 * Implementation of hook_views_default_views().
 */
function discogs_release_views_default_views() {
  $views = array();
  
 // Exported view: discogs_release
$view = new view;
$view->name = 'discogs_release';
$view->description = 'Discography Release';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Discogs Release';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Discogs Release';
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
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Artist(s) */
$handler->display->display_options['fields']['field_discog_artist']['id'] = 'field_discog_artist';
$handler->display->display_options['fields']['field_discog_artist']['table'] = 'field_data_field_discog_artist';
$handler->display->display_options['fields']['field_discog_artist']['field'] = 'field_discog_artist';
$handler->display->display_options['fields']['field_discog_artist']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_artist']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_artist']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_artist']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_artist']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_artist']['field_api_classes'] = 0;
/* Field: Content: Country */
$handler->display->display_options['fields']['field_discog_country']['id'] = 'field_discog_country';
$handler->display->display_options['fields']['field_discog_country']['table'] = 'field_data_field_discog_country';
$handler->display->display_options['fields']['field_discog_country']['field'] = 'field_discog_country';
$handler->display->display_options['fields']['field_discog_country']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_country']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_country']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_country']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_country']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_country']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_country']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_country']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_country']['field_api_classes'] = 0;
/* Field: Content: Catalog# */
$handler->display->display_options['fields']['field_discog_catno']['id'] = 'field_discog_catno';
$handler->display->display_options['fields']['field_discog_catno']['table'] = 'field_data_field_discog_catno';
$handler->display->display_options['fields']['field_discog_catno']['field'] = 'field_discog_catno';
$handler->display->display_options['fields']['field_discog_catno']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_catno']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_catno']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_catno']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_catno']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_catno']['field_api_classes'] = 0;
/* Field: Content: Label */
$handler->display->display_options['fields']['field_discog_label']['id'] = 'field_discog_label';
$handler->display->display_options['fields']['field_discog_label']['table'] = 'field_data_field_discog_label';
$handler->display->display_options['fields']['field_discog_label']['field'] = 'field_discog_label';
$handler->display->display_options['fields']['field_discog_label']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_label']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_label']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_label']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_label']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_label']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_label']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_label']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_label']['field_api_classes'] = 0;
/* Field: Content: Quantity available */
$handler->display->display_options['fields']['field_discog_quantity']['id'] = 'field_discog_quantity';
$handler->display->display_options['fields']['field_discog_quantity']['table'] = 'field_data_field_discog_quantity';
$handler->display->display_options['fields']['field_discog_quantity']['field'] = 'field_discog_quantity';
$handler->display->display_options['fields']['field_discog_quantity']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_discog_quantity']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_discog_quantity']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_discog_quantity']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_discog_quantity']['field_api_classes'] = 0;
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
  'discogs_release' => 'discogs_release',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'discogs-release';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Discogs Release';
$handler->display->display_options['menu']['name'] = 'main-menu';
$translatables['discogs_release'] = array(
  t('Master'),
  t('Discogs Release'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Artist(s)'),
  t('Country'),
  t('Catalog#'),
  t('Label'),
  t('Quantity available'),
  t('Page'),
);

  $views[$view->name] = $view;

  return $views;
}
