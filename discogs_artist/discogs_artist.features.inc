<?php
/**
 * @file
 * discogs_artist.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function discogs_artist_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function discogs_artist_node_info() {
  $items = array(
    'discogs_artist' => array(
      'name' => t('Discography artist'),
      'base' => 'node_content',
      'description' => t('Discography content type. Holds the information for a single discography artist.'),
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
function discogs_artist_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}