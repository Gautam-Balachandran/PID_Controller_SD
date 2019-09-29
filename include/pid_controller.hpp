/*
 * pid_controller.hpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 */

#ifndef INCLUDE_PID_CONTROLLER_HPP_
#define INCLUDE_PID_CONTROLLER_HPP_

class PIDController {
 private:
  /**
   * @brief double values for k_p, k_i and k_d
   */
  double kP=2.5,kD=4.0,kI=3.3;
 public:
  /**
     * @brief Computes the velocity for the PID controller
     * @param  set point and the target velocity
     * @return computed velocity
     */
  double computeVelocity(double setPoint, double targetVel);

};

#endif /* INCLUDE_PID_CONTROLLER_HPP_ */
