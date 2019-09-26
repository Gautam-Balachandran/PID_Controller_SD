/*
 * main file
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 */

#include <iostream>
#include "pid_controller.hpp"

int main()
{
  // Creates pid_controller object
  PID_Controller pidController;
  double val = (double)pidController.compute_velocity(10.0,24.3);
  // prints value
  std::cout<<"Value : "<<val<<std::endl;
  return 0;
}
