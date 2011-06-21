<?php
/**
 * @file
 * discogs_label.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function discogs_label_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'discogs_label_importer';
  $feeds_importer->config = array(
    'name' => 'Discogs Label Importer',
    'description' => 'Discogs Label JSON Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsDiscogsFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.resp.label',    
        'sources' => array(
          'jsonpath_parser:0' => 'name',
          'jsonpath_parser:1' => 'contactinfo',
          'jsonpath_parser:2' => 'parentLabel',
          'jsonpath_parser:3' => 'sublabels',
          'jsonpath_parser:4' => 'images[*].uri150[0]',
        ),
       'debug' => array(
        'options' => array(       
          'context' => 'context',
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'discogs_label',
        'expire' => -1,
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_discog_contactinfo',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_discog_parentlabel',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_discog_img',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'input_format' => NULL,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['discogs_label_importer'] = $feeds_importer;

  return $export;
}
