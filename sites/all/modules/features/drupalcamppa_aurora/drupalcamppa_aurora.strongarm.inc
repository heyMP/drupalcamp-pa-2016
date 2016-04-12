<?php
/**
 * @file
 * drupalcamppa_aurora.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcamppa_aurora_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-page-title' => 'blockify-page-title',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-tabs' => 'blockify-tabs',
    'blockify-messages' => 'blockify-messages',
    'blockify-actions' => 'blockify-actions',
    'blockify-logo' => 0,
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_announcements';
  $strongarm->value = '1';
  $export['comment_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_announcements';
  $strongarm->value = 0;
  $export['comment_anonymous_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_announcements';
  $strongarm->value = 1;
  $export['comment_default_mode_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_announcements';
  $strongarm->value = '50';
  $export['comment_default_per_page_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_announcements';
  $strongarm->value = 1;
  $export['comment_form_location_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_announcements';
  $strongarm->value = '1';
  $export['comment_preview_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_announcements';
  $strongarm->value = 1;
  $export['comment_subject_field_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__announcements';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'listing' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'highlight_item' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_announcements';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_announcements';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_announcements';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_announcements';
  $strongarm->value = '1';
  $export['node_preview_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_announcements';
  $strongarm->value = 1;
  $export['node_submitted_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_drupalcamppa_aurora_settings';
  $strongarm->value = array(
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://drupalcamppa_logo_0.png',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'aurora_min_ie_support' => '10',
    'aurora_html_tags' => 1,
    'aurora_typekit_id' => '0',
    'aurora_livereload' => '0',
    'aurora_livereload_port' => '',
    'magic_embedded_mqs' => 0,
    'magic_css_excludes' => 'system/system.base.css',
    'magic_footer_js' => 1,
    'magic_library_head' => 1,
    'magic_experimental_js' => 0,
    'magic_js_excludes' => '',
    'magic_performance__active_tab' => 'edit-css',
    'magic_css_excludes_regex' => array(
      'exclude' => '/^(modules\\/system\\/system\\.base\\.css)$/',
      'include' => '',
    ),
    'magic_js_excludes_regex' => FALSE,
    'toggle_logo' => 1,
  );
  $export['theme_drupalcamppa_aurora_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://drupalcamppa_logo.png',
    'favicon_mimetype' => 'image/png',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_mode_tab_settings____search_index_announcements';
  $strongarm->value = 1;
  $export['view_mode_tab_settings____search_index_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_mode_tab_settings____search_result_announcements';
  $strongarm->value = 1;
  $export['view_mode_tab_settings____search_result_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'view_mode_tab_settings____teaser_announcements';
  $strongarm->value = 1;
  $export['view_mode_tab_settings____teaser_announcements'] = $strongarm;

  return $export;
}
