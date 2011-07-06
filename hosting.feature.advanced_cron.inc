<?php
/**
 * Implements hook_hosting_feature().
 */ 
function hosting_advanced_cron_hosting_feature() {
  $features['advanced_cron'] = array(
    'title' => t('Advanced cron queue'),
    'description' => t('Keeps track of running the cron process on all your sites, and allows you to set the cron interval on a site-by-site basis.'),
    'status' => HOSTING_FEATURE_ENABLED,
    'module' => 'hosting_advanced_cron',
  );

  return $features;
}
