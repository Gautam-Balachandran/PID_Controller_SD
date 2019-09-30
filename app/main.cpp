/*
 * main file
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 *  Copyright : This code is developed for ENPM808X. Do not copy without citation.
 */

#include <iostream>
#include "pid_controller.hpp"

int main() {
  // Creates pid_controller object
  PIDController pidController;
  double val = pidController.computeVelocity(10.0, 24.3);
  // prints value
  std::cout << "Value : " << val << std::endl;
  return 0;
}
