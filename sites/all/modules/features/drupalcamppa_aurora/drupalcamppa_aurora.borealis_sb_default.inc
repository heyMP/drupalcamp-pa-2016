<?php
/**
 * @file
 * drupalcamppa_aurora.borealis_sb_default.inc
 */

/**
 * Implements hook_default_semantic_wrapper().
 */
function drupalcamppa_aurora_default_semantic_wrapper() {
  $export = array();

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'block_8';
  $semantic_wrapper->module = 'block';
  $semantic_wrapper->delta = '8';
  $semantic_wrapper->semantics = 'div';
  $export['block_8'] = $semantic_wrapper;

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'menu_menu-footer-links';
  $semantic_wrapper->module = 'menu';
  $semantic_wrapper->delta = 'menu-footer-links';
  $semantic_wrapper->semantics = 'div';
  $export['menu_menu-footer-links'] = $semantic_wrapper;

  return $export;
}
