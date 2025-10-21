/*
Author: Zakaria Rahman
Date: October 20th, 2025
Description: This program collects user inputs and displays a short paragraph using those inputs.
Course: ITCS 2530 (C++ Programming 1)
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring required variables
    string userLastName;
    int favoriteNumber;
    string favoriteMathSubject;
    string favoriteMathematician;

    //Prompting user for the required inputs
    cout << "Enter your last name: ";
    cin >> userLastName;

    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    cout << "Enter your favorite Math subject (in One Word, you can use 2 words but using camel case; for example for linear algebra, enter: LinearAlgebra) : ";
    cin >> favoriteMathSubject;

    cout << "Enter your favorite Mathematician's last name: ";
    cin >> favoriteMathematician;


    // Displaying a short paragraph using the inputs collected from the user
    cout << "\nHello, " <<userLastName << "! Welcome to the world of Mathematics." 
    << " It's great to know that your favorite number is " << favoriteNumber << ". "
    << favoriteMathSubject << " is indeed a fascinating subject to explore. "
    << "And lastly, " << favoriteMathematician << " has definitely made significant contributions to the field of Mathematics. "
    << "Sometimes math can be challenging, but with passion and the love for the subject, anything is possible!\n" <<endl;

    // exiting the program
    return 0;
}