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

double PID_Controller::compute_velocity(double setPt, double targetVelocity) {
  // Error is the difference between the expected value and the actual calculated value
  double err = targetVelocity - setPt;
  return ((PID_Controller::kP + PID_Controller::kI + PID_Controller::kD)
      * err);
}

