#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    std::vector<int> array;
    int numberOfElements;
    int divi = 0;

    // Ask the user for the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> numberOfElements;

    // Automatically populate the array with values from 1 to numberOfElements
    for (int i = 1; i <= numberOfElements; ++i) {
        array.push_back(i); // push.back function will add/appened values in array
    }

    // Print the array
    std::cout << "Array elements: "<<std::endl;
    for (int i = 0; i < array.size(); ++i) {
        std::cout <<"["<<std::setfill('0')<<std::setw(2)<<array[i] << "] "; // std:setw(2) Sets the width of the output to 2 characters, it is to check the width of an integer. And if the integer is a single digit, it will fill 0 to a single digit integer, for example the result is 05 instead of 5 only
        divi++;
        if (divi >= 10){ // this if/else is used to create a new line every 10th integer/element
            std::cout<<std::endl;
            divi = 0;
        }
    }

    std::cout << std::endl;

    return 0;
}

//create user interface for this
