//
// Created by philip ake on 7/30/23.
//

#ifndef FUNDAMENTALS3_DEGREEPLAN_H
#define FUNDAMENTALS3_DEGREEPLAN_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <regex>
#include <cstring>
#include <sstream>
using namespace std;
class DegreePlan {
public:
    void welcomeMenu();
    void showDegreePlans(){
        string degreeNumber;
        cout << "Please Select a Degree Plan:" << endl;
        cout << "1) Computer Science" << endl;
        cout << "2) Computer Engineering" << endl;
        cout << "3) Arts" << endl;
        cout << "4) Math" << endl;
        cout << "5) Business" << endl;
        cout << "6) Return to Menu" << endl;
        getline(cin, degreeNumber);
        if (degreeNumber == "1")
        {
            computerScience();
        }
        else if (degreeNumber == "2")
        {
            computerEngineering();

        }
        else if (degreeNumber == "3")
        {
            arts();
        }
        else if (degreeNumber == "4""")
        {
            math();
        }
        else if (degreeNumber == "5")
        {
            business();
        }
        else if (degreeNumber == "6")
        {
            welcomeMenu();
        }
        else
        {
            cout << "Invalid Input Please Try Again." << endl;
            showDegreePlans();
        }

    }
    void computerScience() {
        std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/compSCIcourses.txt");
        std::string line;
        std::cout << "Computer Science Courses\n";
        while (std::getline(is, line)) {
            std::cout << line << std::endl;
        }
        returnTOMENu3();
    }

    void computerEngineering(){
        std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/compENGcourses.txt");
        std::string line;
        std::cout << "Computer Engineering Courses\n";
        while (std::getline(is, line)) {
            std::cout << line << std::endl;
        }
        returnTOMENu3();
    }
    void arts(){
        std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/arts.txt");
        std::string line;
        std::cout << "Art Courses\n";
        while (std::getline(is, line)) {
            std::cout << line << std::endl;
        }
        returnTOMENu3();
    }
    void math(){
        std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/math.txt");
        std::string line;
        std::cout << "Math Courses\n";
        while (std::getline(is, line)) {
            std::cout << line << std::endl;
        }
        returnTOMENu3();
    }
    void business(){
        std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/business.txt");
        std::string line;
        std::cout << "Business Courses\n";
        while (std::getline(is, line)) {
            std::cout << line << std::endl;
        }
        returnTOMENu3();
    }
    void returnTOMENu3() {
        cout << "Press 1 to return to main menu" << endl;
        cout << "Press 2 to view a different degree plan" << endl;
        string choice;
        cin >> choice;
        if (choice == "1") {
            welcomeMenu();
        } else if (choice == "2") {
            showDegreePlans();
        } else {
            cout << "Invalid Input Please Try Again." << endl;
            returnTOMENu3();
        }
    }
private:
    string degreePlanName;


};
#endif //FUNDAMENTALS3_DEGREEPLAN_H
