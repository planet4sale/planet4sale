<?php

/**
 * @file
 * Views integration for Discography module.
 */

/**
 * Implementation of hook_views_plugins().
 */
function discogs_views_plugins() {
  return array(
    'style' => array(
      'discogs_table' => array(
        'title' => t('Discogs Table'),
        'help' => t('Displays Discogs nodes as a table'),
        'theme' => 'discogs_view_table',	
        'handler' => 'discogs_style_table',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}