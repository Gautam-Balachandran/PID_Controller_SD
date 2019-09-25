/*
 * pid_controller.cpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 */

/**
 * @Author Gautam Balachandran
 * @file pid_controller.cpp
 * @brief PID controller class implementation
 *
 */

#include <iostream>
#include "../include/pid_controller.hpp"

/**
 * @brief Computes the velocity for the PID controller
 * @param  set point and the target velocity
 * @return computed velocity
 */

double PID_Controller::compute_velocity(double set_pt, double target_velocity) {
  // Error is the difference between the expected value and the actual calculated value
  double err = target_velocity - set_pt;
  return ((PID_Controller::k_p + PID_Controller::k_i + PID_Controller::k_d)
      * err);
}

