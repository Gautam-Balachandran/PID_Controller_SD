/*
 * test.cpp
 *
 *  Created on: Sep 24, 2019
 *      Author: gautam
 */

/**
 * @Author Gautam Balachandran
 * @file test.cpp
 * @brief PID controller class testing
 *
 */
#include <gtest/gtest.h>
#include "../include/pid_controller.hpp"

/**
 * @brief Test case that checks if the computed value is correct
 */
TEST(PID_Controller_Test, CheckValuePass) {
  PID_Controller pid_controller;
  double expect_pass = 140.14;
  double val = pid_controller.compute_velocity(10.0,24.3);
  EXPECT_NEAR(expect_pass,val,0.01);// Should Pass
}

/**
 * @brief Test case that checks if the computed value is different
 */
// TEST(PID_Controller_Test, CheckValueFail) {
//   PID_Controller pid_controller;
//   double expect_fail = 140;
//   double val = pid_controller.compute_velocity(10.0,24.3);
//   EXPECT_NEAR(expect_fail,val,0.01);// Should fail
// }

/**
 * @brief Test case to check if the computed value is type double
 */
TEST(PID_Controller_Test, checkDoublePass) {
  PID_Controller pid_controller;
  double val = pid_controller.compute_velocity(10.0,24.3);
  // For Pass check
  EXPECT_EQ(typeid(val), typeid(double));
}

/**
 * @brief Test case to check if the computed value is not type int
 */
// TEST(PID_Controller_Test, checkDoubleFail) {
//   PID_Controller pid_controller;
//   double val = pid_controller.compute_velocity(10.0,24.3);
//   // For failure check
//   EXPECT_EQ(typeid(val), typeid(int));
// }
