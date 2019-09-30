/*
 * pid_controller.cpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 *  Copyright : This code is developed for ENPM808X. Do not copy without citation.
 */

/**
 * @Author Gautam Balachandran
 * @file pid_controller.cpp
 * @brief PID controller class implementation
 */

#include <iostream>
#include "../include/pid_controller.hpp"

/**
 * @brief Computes the velocity for the PID controller
 * @param  set point and the target velocity
 * @return computed velocity
 */

double PIDController::computeVelocity(double setPt, double targetVelocity) {
  // Error is (expected value - actual calculated value
  double err = targetVelocity - setPt;
  double errorDot = err - prevError;
  itError += err;

  // compute PID output
  double output = this->kP * err + this->kD * errorDot + this->kI * itError;
  return output;
}

