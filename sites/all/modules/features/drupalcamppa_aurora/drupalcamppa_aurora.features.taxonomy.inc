<?php
/**
 * @file
 * drupalcamppa_aurora.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalcamppa_aurora_taxonomy_default_vocabularies() {
  return array(
    'announcements' => array(
      'name' => 'Announcements',
      'machine_name' => 'announcements',
      'description' => 'This will be used to designate news as a type of announcement.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
