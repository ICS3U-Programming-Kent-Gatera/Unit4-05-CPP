// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Kent Gatera
// Date: Nov 11, 2022
// This program sums numbers together using continue statements.

#include <iostream>
#include <string>

int main() {
    // Defining variables.
    int numAmount;
    int userNum;
    int sumNum = 0;
    int loopCount = 0;
    float userNumFloat;
    float numAmountFloat;
    std::string numAmountStr;
    std::string userNumStr;
    // Try catch words and decimals.
    try {
        std::cout << "How many numbers you wanna add?: ";
        std::cin >> numAmountStr;
        numAmount = std::stoi(numAmountStr);
        numAmountFloat = std::stof(numAmountStr);
        if (numAmountFloat != numAmount) {
            std::cout << "Enter a whole number" << std::endl;
            return main();
        }
    } catch (std::invalid_argument) {
        std::cout << "The integer needs to be a whole number.(e.g 5)" <<
        std::endl;
    }
    // continue
    if (numAmount > 0) {
        while (loopCount < numAmount) {
            // Try catch for strings and decimals.
            try {
                std::cout << "WHat is the ("<< loopCount+1 <<") number?: ";
                std::cin >> userNumStr;
                userNum = std::stoi(userNumStr);
                userNumFloat = std::stof(userNumStr);
                if (userNumFloat != userNum) {
                    std::cout << "Enter a whole number" << std::endl;
                    return main();
                    }
            } catch (std::invalid_argument) {
                std::cout << "The integer needs to be a whole number.(e.g 5)";
                    }
            if (numAmount == 1) {
                std::cout << "You must add 2 or more numbers." << std::endl;
                std::cout << userNum << " is your sum.";
                continue;
                // This is where the processing happens.
            } else if (loopCount < numAmount) {
                loopCount++;
                sumNum += userNum;
                continue;
            }
        }
    } else if (numAmount <= 0) {
        std::cout << "You must add 2 or more numbers";
        // This the final output for the answer.
    } else if (loopCount == numAmount) {
        std::cout << "Your sum is '" << sumNum << "'\n";
    }
}
