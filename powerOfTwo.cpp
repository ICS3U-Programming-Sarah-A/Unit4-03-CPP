// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Date: Apr, 21, 2022
// This program asks the user for a whole number. It then calculate the square
// of two of each number from 0 until that number, using for loops.
#include <iostream>
#include <cmath>


int main() {
  // initialize the loopCounter and powerOfTwo.
  int powerOfTwo = 1;
  int loopCounter = 0;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
    // convert from string to int
     userNum = std::stoi(userNumString);

    if (userNum >= 0) {
        // calculate the square of loopCounter, starting from 0 until that
        // number
        for (loopCounter = 0; loopCounter <= userNum; loopCounter++) {
            powerOfTwo = pow(loopCounter, 2);
            std::cout << loopCounter << "^2 = " << powerOfTwo << std::endl;
        }

      } else {
          std::cout << userNum << " is not a whole number" << std::endl;
      }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userNumString << " is not a number.\n";
  }
}
