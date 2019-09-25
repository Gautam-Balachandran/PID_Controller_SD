/*
 * pid_controller.hpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 */

#ifndef INCLUDE_PID_CONTROLLER_HPP_
#define INCLUDE_PID_CONTROLLER_HPP_

class PID_Controller {
 private:
  /**
   * @brief double values for k_p, k_i and k_d
   */
  double k_p=2.5,k_d=4.0,k_i=3.3;
 public:
  /**
     * @brief Computes the velocity for the PID controller
     * @param  set point and the target velocity
     * @return computed velocity
     */
  double compute_velocity(double set_point, double target_vel);

};

#endif /* INCLUDE_PID_CONTROLLER_HPP_ */
