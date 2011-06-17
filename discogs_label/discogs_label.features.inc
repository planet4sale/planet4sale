<?php
/**
 * @file
 * discogs_label.features.inc
 */
 
 /**
 * Implementation of hook_ctools_plugin_api().
 */
function discogs_label_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function discogs_label_node_info() {
  $items = array(
    'discogs_label' => array(
      'name' => t('Discogs label'),
      'base' => 'node_content',
      'description' => t('Discogs label content type. Holds the information for a single Discogs label.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
