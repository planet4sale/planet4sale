<?php

/**
 * @file
 * Home of the FeedsDiscogsFetcher and related classes.
 */

/**
 * Result of FeedsDiscogsFetcher::fetch().
 */
class FeedsDiscogsFetcherResult extends FeedsFetcherResult {
  protected $url;
  protected $file_path;



  /**
   * Constructor.
   */
  public function __construct($url = NULL) {
    $this->url = $url;
    parent::__construct('');
  }

  /**
   * Overrides FeedsFetcherResult::getRaw();
   */
  public function getRaw() {
    include('discogs_http_request.inc');
    //   feeds_include_library('http_request.inc', 'http_request');
    $result = discogs_http_request_get($this->url);
    if (!in_array($result->code, array(200, 201, 202, 203, 204, 205, 206))) {
      throw new Exception(t('Download of @url failed with code !code.', array('@url' => $this->url, '!code' => $result->code)));
    }
    return $this->sanitizeRaw($result->data);
  }
}

/**
 * Fetches data via HTTP.
 */
class FeedsDiscogsFetcher extends FeedsFetcher {

  /**
   * Implements FeedsFetcher::fetch().
   */
  public function fetch(FeedsSource $source) {
    $source_config = $source->getConfigFor($this);
    return new FeedsDiscogsFetcherResult($source_config['source']);
  }

  /**
   * Clear caches.
   */
  public function clear(FeedsSource $source) {
    $source_config = $source->getConfigFor($this);
    $url = $source_config['source'];
  include('discogs_http_request.inc');
  //   feeds_include_library('http_request.inc', 'http_request');
    http_request_clear_cache($url);
  }
  
    /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'auto_detect_feeds' => FALSE,
    );
  }


  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['auto_detect_feeds'] = array(
      '#type' => 'checkbox',
      '#title' => t('Auto detect feeds'),
      '#description' => t('If the supplied URL does not point to a feed but an HTML document, attempt to extract a feed URL from the document.'),
      '#default_value' => $this->config['auto_detect_feeds'],
    );
    return $form;
  }

  /**
   * Expose source form.
   */
  public function sourceForm($source_config) {
    $form = array();
    $form['source'] = array(
      '#type' => 'textfield',
      '#title' => t('URL'),
      '#description' => t('Enter a feed URL.'),
      '#default_value' => isset($source_config['source']) ? $source_config['source'] : '',
      '#maxlength' => NULL,
      '#required' => TRUE,
    );
    return $form;
  }

  /**
   * Override parent::sourceFormValidate().
   */
  public function sourceFormValidate(&$values) {
    if ($this->config['auto_detect_feeds']) {
  include('discogs_http_request.inc');
  //   feeds_include_library('http_request.inc', 'http_request');
     }
  }

  /**
   * Override sourceSave() - subscribe to hub.
   */
  public function sourceSave(FeedsSource $source) {
  //  if ($this->config['use_pubsubhubbub']) {
  //    $this->subscribe($source);
   // }
  }
}