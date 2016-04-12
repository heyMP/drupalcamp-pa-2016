<?php
/**
 * @file
 * Code for the BrowserSync module theme related functions.
 */

/**
 * Preprocesses variables for browsersync-snippet.tpl.php.
 */
function template_preprocess_browsersync_snippet(&$variables) {
  $variables['socket_address'] = check_plain($variables['socket_address']);
  $variables['socket_port'] = check_plain($variables['socket_port']);
  $variables['client_port'] = check_plain($variables['client_port']);
  $variables['client_path'] = check_plain($variables['client_path']);
  $variables['version'] = check_plain($variables['version']);

  // Whether the new snippet template should be used or not.
  $variables['new_template'] = TRUE;

  if ($variables['version']) {
    if (version_compare($variables['version'], '1.0.0', '<')) {
      $variables['new_template'] = FALSE;
    }
    $variables['version'] = '.' . $variables['version'];
  }
}
