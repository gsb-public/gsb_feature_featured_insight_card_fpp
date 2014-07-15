<?php
/**
 * @file
 * gsb_feature_featured_insight_card_fpp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_featured_insight_card_fpp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
