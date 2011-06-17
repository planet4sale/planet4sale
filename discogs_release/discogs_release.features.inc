<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function discogs_release_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}


/**
 * @file
 * discogs_release.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function discogs_release_node_info() {
  $items = array(
    'discogs_release' => array(
      'name' => t('Discography release'),
      'base' => 'node_content',
      'description' => t('Discography content type. Holds the information for a single discography release.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function discogs_release_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}