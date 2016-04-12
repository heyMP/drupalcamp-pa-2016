<?php
/**
 * @file
 * drupalcamppa_aurora.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalcamppa_aurora_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer block semantics'.
  $permissions['administer block semantics'] = array(
    'name' => 'administer block semantics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'borealis_sb',
  );

  return $permissions;
}
