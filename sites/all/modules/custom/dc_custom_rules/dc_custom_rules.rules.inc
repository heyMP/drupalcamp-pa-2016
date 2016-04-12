<?php

/**
 * @file dc_custom_rules.rules.inc
 * TODO: Enter file description here.
 */

/**
 * Implements hook_rules_event_info().
 */
function dc_custom_rules_rules_event_info() {
  $items = array(
    'add_session_page_view' => array(
      'label' => t('The user is trying to access the node add session page.'),
      'group' => t('Node'),
    ),
  );
  return $items;
}
