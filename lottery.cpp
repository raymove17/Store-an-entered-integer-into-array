#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>  // Include for srand and rand
#include <ctime>    // Include for time
#include <algorithm> // Include for random_shuffle

//this is print function
void printArray(const std::vector<int>& array) {
    int divi = 0;
    std::cout << "Array elements: " << std::endl;
    for (int i = 0; i < array.size(); ++i) {
        std::cout << "[" << std::setfill('0') << std::setw(2) << array[i] << "] "; // std:setw(2) Sets the width of the output to 2 characters, it is to check the width of an integer. And if the integer is a single digit, it will fill 0 to a single digit integer, for example the result is 05 instead of 5 only
        divi++;
        if (divi >= 10) { // this if/else is use to create a new line every 10th integer/element
            std::cout << std::endl;
            divi = 0;
        }
    }
}

//this is random picker  function
std::vector<int> pickRandomElements(const std::vector<int>& array, int numElements) {
    std::vector<int> pickedElements;
    std::vector<int> indices(array.size()); // this is the value of array indices
    for (int i = 0; i < indices.size(); ++i) { // 
        indices[i] = i;
    }

    std::random_shuffle(indices.begin(), indices.end());

    for (int i = 0; i < numElements && i < array.size(); ++i) {
        pickedElements.push_back(array[indices[i]]);
    }

    return pickedElements;
}


int main() {
    std::vector<int> array;
    int optn;
    int numberOfElements = 0;
    //int divi = 0;

    // Ask the user for the number of elements
    //std::cout << "Enter the number of elements: "; //instead of manual entring the element, create an option for 6/42 6/45 6/49 6/55 6/58
    std::cout << "Enter category:" << std::endl;
    std::cout << "6/42 [1]" << std::endl;
    std::cout << "6/45 [2]" << std::endl;
    std::cout << "6/49 [3]" << std::endl;
    std::cout << "6/55 [4]" << std::endl;
    std::cout << "6/58 [5]" << std::endl;
    std::cin >> optn;


    if (optn == 1) {
        numberOfElements = 42;
    }
    else if (optn == 2) {
        numberOfElements = 45;
    }
    else if (optn == 3) {
        numberOfElements = 49;
    }
    else if (optn == 4) {
        numberOfElements = 55;
    }
    else if (optn == 5) {
        numberOfElements = 58;
    }
    else {
        std::cout << "Error! Please choose right category!" << std::endl;
    }

    // Automatically populate the array with values from 1 to numberOfElements
    for (int i = 1; i <= numberOfElements; ++i) {
        array.push_back(i); // push.back function will add/appened values in array
    }

    // Print the array
    printArray(array);

    // Seed the random number generator
    std::srand(std::time(0));

    // Pick 6 random elements from the array
    std::vector<int> randomElements = pickRandomElements(array, 6);

    /*
    std::cout << "Array elements: " << std::endl;
    for (int i = 0; i < array.size(); ++i) {
        std::cout << "[" << std::setfill('0') << std::setw(2) << array[i] << "] "; // std:setw(2) Sets the width of the output to 2 characters, it is to check the width of an integer. And if the integer is a single digit, it will fill 0 to a single digit integer, for example the result is 05 instead of 5 only
        divi++;
        if (divi >= 10) { // this if/else is use to create a new line every 10th integer/element
            std::cout << std::endl;
            divi = 0;
        }
    }
    */
    /*
    void printArray(const std::vector<int>&array); {
        std::cout << "Array elements: " << std::endl;
        for (int i = 0; i < array.size(); ++i) {
            std::cout << "[" << std::setfill('0') << std::setw(2) << array[i] << "] "; // std:setw(2) Sets the width of the output to 2 characters, it is to check the width of an integer. And if the integer is a single digit, it will fill 0 to a single digit integer, for example the result is 05 instead of 5 only
            divi++;
            if (divi >= 10) { // this if/else is use to create a new line every 10th integer/element
                std::cout << std::endl;
                divi = 0;
            }
        }
    }
    */
    
    // Print the randomly picked elements
    std::cout << "Randomly picked elements: ";
    for (int i = 0; i < randomElements.size(); ++i) {
        std::cout << std::setfill('0') << std::setw(2) << randomElements[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}

//create user interface for this
