<?php
// $Id: discogs.admin.inc,v 1.1 2011/01/19 16:15:56 karlheinz Exp $
/**
 * @file
 * Administration page callbacks for the discogs module.
 */

/**
 * Form builder for Discogs admin settings.
 *
 * @ingroup forms
 * @see system_settings_form()
 * @see discogs.module.discogs_menu()
 */
function discogs_admin_settings() {
  $form = array();

  $form['discogs_check_discogs_release'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check presence of Discogs Release module'),
    '#description' => t(
      'Defines if !discogs will check for the presence of the !discogs_release and 
        !discogs_artist module. This only affects the presentation of a warning in the
        !status_page complaining about both the Discogs Release module and the
        Discogs Artists module being installed at the same time.',
      array(
        '!discogs' => l(
          t('Discogs'),
          'http://drupal.org/project/discogs'
        ),
        '!discogs_release' => l(
          t('Discogs Release'),
          'http://drupal.org/project/discogs'
        ),
        '!discogs_artist' => l(
          t('Discogs Artist'),
          'http://drupal.org/project/discogs'
        ),	
        '!status_page' => l(t('Status report'), 'admin/reports/status'),
      )
    ),
    '#default_value' => variable_get('discogs_check_discogs_release', 1),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}
