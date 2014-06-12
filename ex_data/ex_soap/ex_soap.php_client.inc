<?php

/**
 * @file
 * Implementation of PHP Soap Client.
 */

/**
 * Form builder for php_client admin form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function ex_soap_php_client_form($form, &$form_state) {
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Submit callback for 'ex_soap_php_client' form.
 *
 * @param $form
 * @param $form_state
 */
function ex_soap_php_client_form_submit($form, &$form_state) {
  drupal_set_message('API has been requested.');
}
