<?php
/**
 * @file
 * drupalcamppa_aurora.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function drupalcamppa_aurora_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Keynote',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f6d74915-eea1-473b-80cd-b2ad2d2fa75e',
    'vocabulary_machine_name' => 'announcements',
    'metatags' => array(),
  );
  return $terms;
}
