<?php
/**
 * @file
 * discogs_artist.feeds_importer_default.inc
 */

/**
 * Implementation of hook_feeds_importer_default().
 */
function discogs_artist_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'discogs_artist_importer';
  $feeds_importer->config = array(
    'name' => 'Discogs Artist Importer',
    'description' => 'Discogs Artist JSON Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsDiscogsFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'sources' => array(
          'jsonpath_parser:0' => 'name',
          'jsonpath_parser:1' => 'realname',
          'jsonpath_parser:2' => 'images[*].uri150[0]',	
          'jsonpath_parser:3' => 'namevariations',	  
        ),
        'context' => '$.resp.artist',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,	    
            'jsonpath_parser:2' => 0,	    
            'jsonpath_parser:3' => 0,		    
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'discogs_artist',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_discog_realname',
            'unique' => FALSE,
          ),	  
        2 => array(
          'source' => 'jsonpath_parser:2',
          'target' => 'field_discog_img',
          'unique' => FALSE,
        ),	  
        3 => array(
          'source' => 'jsonpath_parser:3',
          'target' => 'body',
          'unique' => FALSE,
        ),		
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['discogs_artist_importer'] = $feeds_importer;

  return $export;
}
