<?php
/**
 * @file
 * drupalcamppa_aurora.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupalcamppa_aurora_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_logout:user/logout
  $menu_links['main-menu_logout:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_my-account:user',
  );
  // Exported menu link: main-menu_my-account:user
  $menu_links['main-menu_my-account:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Logout');
  t('My Account');


  return $menu_links;
}
