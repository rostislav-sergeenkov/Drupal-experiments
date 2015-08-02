<?php

/**
 * @file
 * Implementation of PHP Soap Client.
 */

define('SERVICE_WSDL', 'http://wsf.cdyne.com/WeatherWS/Weather.asmx?WSDL');
define('CITY_ZIP', 91911);

/**
 * Form builder for php_client admin form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function ex_soap_client_form($form, &$form_state) {
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send the Request'),
  );

  return $form;
}

/**
 * Submit callback for 'ex_soap_php_client' form.
 *
 * @param $form
 * @param $form_state
 */
function ex_soap_client_form_submit($form, &$form_state) {
  $soap_client = new SoapClient(SERVICE_WSDL);

//  $weatherInformation = $soap_client->__soapCall('GetWeatherInformation', array(CITY_ZIP));
  $cityForecastByZIP = $soap_client->GetCityForecastByZIP(CITY_ZIP);
  $cityWeatherByZIP = $soap_client->__soapCall('GetCityWeatherByZIP', array(CITY_ZIP));

//  var_dump($weatherInformation);
  var_dump($cityForecastByZIP);
  var_dump($cityWeatherByZIP);
  var_dump($soap_client->GetCityForecastByZIP(91911));

  exit;
  drupal_set_message('API has been requested.');
}
