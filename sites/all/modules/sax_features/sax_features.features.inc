<?php
/**
 * @file
 * sax_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sax_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sax_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sax_features_node_info() {
  $items = array(
    'saxamaphone' => array(
      'name' => t('Saxamaphone'),
      'base' => 'node_content',
      'description' => t('A dummy content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
