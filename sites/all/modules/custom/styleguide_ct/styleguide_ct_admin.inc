<?php

/*
 * @file
 * StyleGuide Content Types Configuration Settings Form
 */
function styleguide_ct_admin($form, &$form_state) {
  $contenttypes = array();
  $viewmodes = array();
  $contenttypelist = node_type_get_types();
  $viewmodeslist = _get_view_modes();

  foreach ($contenttypelist as $name => $type) {
    $contenttypes[$name] = $type->name;
  }

  foreach ($viewmodeslist as $name => $value) {
    $viewmodes[$name] = $value['label'];
  }
  // Sort the array alphebetically
  ksort($contenttypes);

  $form['styleguide_ct_enabled'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content Types'),
    '#options' => $contenttypes,
    '#default_value' => variable_get('styleguide_ct_enabled'),
    '#description' => t('Enable the content types to be listed on your styleguide.'),
  );

  $form['styleguide_ct_viewmodes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content Types'),
    '#options' => $viewmodes,
    '#default_value' => variable_get('styleguide_ct_viewmodes'),
    '#description' => t('Enable the viewmodes that you want your content types to be displayed.'),
  );

  return (system_settings_form($form));
}
