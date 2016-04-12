<?php
/**
 * @file
 * drupalcamppa_aurora.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcamppa_aurora_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'default';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'theme' => array(
      'values' => array(
        'drupalcamppa_aurora' => 'drupalcamppa_aurora',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'menu',
          'weight' => '-8',
        ),
        'bean-global-sitename-banner' => array(
          'module' => 'bean',
          'delta' => 'global-sitename-banner',
          'region' => 'header',
          'weight' => '-8',
        ),
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-12',
        ),
        'blockify-blockify-tabs' => array(
          'module' => 'blockify',
          'delta' => 'blockify-tabs',
          'region' => 'content',
          'weight' => '-11',
        ),
        'blockify-blockify-actions' => array(
          'module' => 'blockify',
          'delta' => 'blockify-actions',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-cod_sponsors-block' => array(
          'module' => 'views',
          'delta' => 'cod_sponsors-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-footer-links' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-homepage-call-to-action-buttons' => array(
          'module' => 'bean',
          'delta' => 'homepage-call-to-action-buttons',
          'region' => 'banner',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'main_prefix',
          'weight' => '-10',
        ),
        'views-keynote_announcement-block' => array(
          'module' => 'views',
          'delta' => 'keynote_announcement-block',
          'region' => 'main_prefix',
          'weight' => '-9',
        ),
        'views-recent_news-block_1' => array(
          'module' => 'views',
          'delta' => 'recent_news-block_1',
          'region' => 'main_prefix',
          'weight' => '-8',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
      ),
    ),
    'theme' => array(
      'values' => array(
        'drupalcamppa_aurora' => 'drupalcamppa_aurora',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['sponsors'] = $context;

  return $export;
}
