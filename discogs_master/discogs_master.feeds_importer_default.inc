<?php
/**
 * @file
 * discogs_master.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function discogs_master_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'discogs_master_importer';
  $feeds_importer->config = array(
    'name' => 'Discogs Master Importer',
    'description' => 'Discogs Master JSON Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
         'context' => '$.resp.master',    
        'sources' => array(
          'jsonpath_parser:0' => 'id',
          'jsonpath_parser:1' => 'artists[*].name',
          'jsonpath_parser:2' =>   'id',
          'jsonpath_parser:3' =>  'main_release',
          'jsonpath_parser:4' =>  'notes',
          'jsonpath_parser:5' => 'images[*].uri150[0]',
          'jsonpath_parser:6' => 'year',
          'jsonpath_parser:7' => 'genres',
        ),
       'debug' => array(
        'options' => array(       
          'context' => 'context',
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'discogs_master',
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
            'target' => 'field_discog_artist',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_discog_main_release',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_discog_notes',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_discog_img',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_discog_year',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'body',
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
  $export['discogs_master_importer'] = $feeds_importer;

  return $export;
}
