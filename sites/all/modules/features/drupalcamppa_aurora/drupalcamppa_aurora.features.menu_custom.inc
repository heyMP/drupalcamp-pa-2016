<?php
/**
 * @file
 * drupalcamppa_aurora.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupalcamppa_aurora_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-links.
  $menus['menu-footer-links'] = array(
    'menu_name' => 'menu-footer-links',
    'title' => 'Footer Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Links');


  return $menus;
}
