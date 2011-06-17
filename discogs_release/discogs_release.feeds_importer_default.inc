<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function discogs_release_feeds_importer_default() {
  $export = array();

 $feeds_importer = new stdClass;
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'discogs_release_importer';
$feeds_importer->config = array(
  'name' => 'Discogs Release Importer',
  'description' => 'Discogs Release JSON Importer',
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
        'context' => '$.resp.release',    
        'sources' => array(
         'jsonpath_parser:0'   => 'title',
         'jsonpath_parser:1'   => 'artists[*].name',
         'jsonpath_parser:2'   => 'country',
         'jsonpath_parser:3'   => 'labels[*].catno',
         'jsonpath_parser:4'   => 'formats[*].name',
         'jsonpath_parser:5'   => 'images[*].uri150[0]',
         'jsonpath_parser:6'   => 'labels[*].name',
         'jsonpath_parser:7'   =>  'main_release',
         'jsonpath_parser:8'   =>  'notes',
         'jsonpath_parser:9'   => 'formats[*].qty',	
         'jsonpath_parser:10' => 'year',
         'jsonpath_parser:11' => 'formats[*].descriptions[*]',			 
       ),
       'debug' => array(
        'options' => array(       
          'context' => 'context',
           'jsonpath_parser:0'   => 0,
           'jsonpath_parser:1'   => 0,
           'jsonpath_parser:2'   => 0,
           'jsonpath_parser:3'   => 0,
           'jsonpath_parser:4'   => 0,
           'jsonpath_parser:5'   => 0,
           'jsonpath_parser:6'   => 0,
           'jsonpath_parser:7'   => 0,
           'jsonpath_parser:8'   => 0,
           'jsonpath_parser:9'   => 0,		 
           'jsonpath_parser:10' => 0,		   
           'jsonpath_parser:11' => 0,		   
        ),
      ),
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'content_type' => 'discogs_release',
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
          'target' => 'field_discog_catno',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'jsonpath_parser:3',
          'target' => 'field_discog_country',
          'unique' => FALSE,
        ),
        4 => array(
          'source' => 'jsonpath_parser:4',
          'target' => 'field_discog_format',
          'unique' => FALSE,
        ),
        5 => array(
          'source' => 'jsonpath_parser:5',
          'target' => 'field_discog_img',
          'unique' => FALSE,
        ),
        6 => array(
          'source' => 'jsonpath_parser:6',
          'target' => 'field_discog_label',
          'unique' => FALSE,
        ),
        7 => array(
          'source' => 'jsonpath_parser:7',
          'target' => 'field_discog_main_release',
          'unique' => FALSE,
        ),
        8 => array(
          'source' => 'jsonpath_parser:8',
          'target' => 'field_discog_notes',
          'unique' => FALSE,
        ),
        9 => array(
          'source' => 'jsonpath_parser:9',
          'target' => 'field_discog_quantity'
          'unique' => FALSE,
        ),
        10 => array(
          'source' => 'jsonpath_parser:10',
          'target' => 'field_discog_year',
          'unique' => FALSE,
        ),	
        11 => array(
          'source' => 'jsonpath_parser:11',
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

  $export['discogs_release_importer'] = $feeds_importer;

  return $export;
}