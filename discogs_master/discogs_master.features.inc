<?php
/**
 * @file
 * discogs_master.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function discogs_master_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function discogs_master_node_info() {
  $items = array(
    'discogs_master' => array(
      'name' => t('Discography master'),
      'base' => 'node_content',
      'description' => t('Discography content type. Holds the information for a single discography release.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
