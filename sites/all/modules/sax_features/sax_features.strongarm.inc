<?php
/**
 * @file
 * sax_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sax_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__saxamaphone';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__saxamaphone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_saxamaphone';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_saxamaphone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_saxamaphone';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_saxamaphone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_saxamaphone';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_saxamaphone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_saxamaphone';
  $strongarm->value = '0';
  $export['node_preview_saxamaphone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_saxamaphone';
  $strongarm->value = 0;
  $export['node_submitted_saxamaphone'] = $strongarm;

  return $export;
}
