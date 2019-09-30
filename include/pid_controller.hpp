/*
 * pid_controller.hpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 *  Copyright : This code is developed for ENPM808X. Do not copy without citation.
 */

#ifndef INCLUDE_PID_CONTROLLER_HPP_
#define INCLUDE_PID_CONTROLLER_HPP_

class PIDController {
 public:
 /**
  * @brief Computes the velocity for the PID controller
  * @param  set point and the target velocity
  * @return computed velocity
  */
  double computeVelocity(double setPoint, double targetVel);

 private:
  /**
   * @brief double values for k_p, k_i and k_d
   */
  double kP = 2.5, kD = 4.0, kI = 3.3;

  /**
   * @brief double values previous error and integral error
   */
  double prevError = 0.0;
  double itError = 0.0;
};

#endif /* INCLUDE_PID_CONTROLLER_HPP_ */
