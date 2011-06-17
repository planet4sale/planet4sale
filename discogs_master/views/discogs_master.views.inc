<?php

/**
 * @file
 * Views integration for Discography module.
 */

/**
 * Implementation of hook_views_plugins().
 */
function discogs_master_views_plugins() {
  return array(
    'style' => array(
      'discogs_master' => array(
        'title' => t('Views Discogs'),
        'help' => t('Displays Discogs nodes as a table'),
        'theme' => 'views_view_discogs',	
        'handler' => 'discogs_master_style_table',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}

