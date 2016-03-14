<?php

/**
 * @file
 * Administration functions and forms for the Students module.
 */

/**
 * Form constructor for the Student's data form.
 *
 * @ingroup forms
 */
function student_form($form, &$form_state) {
    $form['name'] = array(
        '#type' => 'textfield',
        '#title' => t('Name'),
        '#maxlenght' => 255,
        '#required' => TRUE
    );

    $form['gender'] = array(
        '#type' => 'radios',
        '#title' => t('Gender'),
        '#maxlenght' => 6,
        '#required' => TRUE,
        '#options' => array('male' => t('Male'), 'female' => t('Female'))
    );

    $form['faculty_number'] = array(
        '#type' => 'textfield',
        '#title' => t('Faculty number'),
        '#maxlenght' => 8,
        '#required' => TRUE
    );

    return $form;
}
