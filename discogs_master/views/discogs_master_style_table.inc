<?php
// $Id: discogs_master_style_table.inc,v 1.1.2.13.2.18 2010/08/30 15:58:47 loubabe Exp $

class discogs_master_style_table extends views_plugin_style_table {

  /**
   * Views options definitions
   *
   */
  function option_definition() {
    $options = parent::option_definition();

    return $options;
  }

  /**
   * Return a form containing the options for the view.
   *
   * @param string $form
   * @param string $form_state
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  
  }


}
