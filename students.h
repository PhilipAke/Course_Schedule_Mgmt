//
// Created by philip ake on 7/30/23.
//

#ifndef FUNDAMENTALS3_STUDENTS_H
#define FUNDAMENTALS3_STUDENTS_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <regex>
#include <cstring>
#include <sstream>
#include "Schedule.h"
using namespace std;
class Students {
public:
    void studentMenu(){
        cout << "Would you like to search for a student? (Y/N)" << endl;
        string choice;
        cin >> choice;
        if (choice == "Yes" or choice == "yes" or choice == "Y" or choice == "y"){
            searchStudent();
        }
        else if (choice == "No" or choice == "no" or choice == "N" or choice == "n"){
            cout << "Returning to Main Menu" << endl;
        }
        else {
            cout << "Invalid Input Please Try Again." << endl;
            studentMenu();
        }

    }
    void searchStudent() {
        string studentName;
        cout << "Please enter student name" << endl;
        cin.ignore();
        getline(cin, studentName);

        ifstream is("/Users/philipake/CLionProjects/Fundamentals3/students.txt");
        string line;
        bool found = false;

        while (getline(is, line)) {
            stringstream ss(line);
            string firstName, middleName, lastName, id, major;
            ss >> firstName >> middleName >> lastName >> id >> major;

            string fullName = firstName + " " + middleName + " " + lastName;
            if (fullName == studentName) {
                found = true;
                cout << "Student Found" << endl;
                cout << "Please Select what information you would like to view" << endl;
                cout << "1) Student's declared major" << endl;
                cout << "2) Student's Degree Plan" << endl;
                cout << "3) Student's Schedule" << endl;
                string choice2;
                cin >> choice2;
                if (choice2 == "1") {
                    cout << "Please enter student ID" << endl;
                    cin.ignore();
                    getline(cin, studentID);
                    string studentFname, studentMname, studentLname, studentID2, studentMajor;
                    fstream currentFile;
                    currentFile.open("/Users/philipake/CLionProjects/Fundamentals3/students.txt");
                    while (currentFile >> studentFname >> studentMname >> studentLname >> studentID2 >> studentMajor) {
                        if (studentID == studentID2) {
                            cout << "Student's declared major is ";
                            if (studentMajor == "COMPSCI") {
                                cout << "Computer Science." << endl;
                            } else if (studentMajor == "COMPENG") {
                                cout << "Computer Engineering." << endl;
                            } else if (studentMajor == "ARTS") {
                                cout << "Arts" << endl;
                            } else if (studentMajor == "MATH") {
                                cout << "Math" << endl;
                            } else if (studentMajor == "BUSINESS") {
                                cout << "Business" << endl;
                            } else {
                                cout << "Major Not Found." << endl;
                            }
                            currentFile.close();
                        }
                    }

                } else if (choice2 == "2") {
                    cout << "Please enter student ID" << endl;
                    cin.ignore();
                    getline(cin, studentID);
                    string studentFname, studentMname, studentLname, studentID2, studentMajor;
                    fstream currentFile;
                    currentFile.open("/Users/philipake/CLionProjects/Fundamentals3/students.txt");
                    while (currentFile >> studentFname >> studentMname >> studentLname >> studentID2 >> studentMajor) {
                        if (studentID == studentID2) {
                            cout << "Student's Degree Plan is" << endl;
                            if (studentMajor == "COMPSCI") {
                                std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/compSCIcourses.txt");
                                std::string line;
                                while (std::getline(is, line)) {
                                    std::cout << line << std::endl;
                                }
                            } else if (studentMajor == "COMPENG") {
                                std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/compENGcourses.txt");
                                std::string line;
                                while (std::getline(is, line)) {
                                    std::cout << line << std::endl;
                                }
                            } else if (studentMajor == "ARTS.") {
                                std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/arts.txt");
                                std::string line;
                                while (std::getline(is, line)) {
                                    std::cout << line << std::endl;
                                }
                            } else if (studentMajor == "MATH.") {
                                std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/math.txt");
                                std::string line;
                                while (std::getline(is, line)) {
                                    std::cout << line << std::endl;
                                }
                            } else if (studentMajor == "BUSINESS.") {
                                std::ifstream is("/Users/philipake/CLionProjects/Fundamentals3/business.txt");
                                std::string line;
                                while (std::getline(is, line)) {
                                    std::cout << line << std::endl;
                                }
                            } else {
                                cout << "Major Not Found." << endl;
                            }
                            currentFile.close();
                        }
                    }

                } else if (choice2 == "3") {
                    Schedule s;
                    s.classSchedule();
                    found = true;
                    returnTomenu2();

                }
            }
        }
        if (!found) {
            cout << "Student Not Found" << endl;
            cout << "Would you like to search again? (Y/N)" << endl;
            string choice3;
            cin >> choice3;
            if (choice3 == "Yes" or choice3 == "yes" or choice3 == "Y" or choice3 == "y") {
                searchStudent();
            } else if (choice3 == "No" or choice3 == "no" or choice3 == "N" or choice3 == "n") {
                cout << "Returning to Main Menu" << endl;
            } else {
                cout << "Invalid Input Please Try Again." << endl;
                searchStudent();
            }
        }
        returnTomenu2();
    }
    void returnTomenu2(){
        cout << "Press 1 to return to main menu" << endl;
        string choice;
        cin >> choice;
        if (choice == "1"){
            DegreePlan degreePlan;
            degreePlan.welcomeMenu();
        }
        else {
            cout << "Invalid Input Please Try Again." << endl;
            returnTomenu2();
        }
    }
private:
    string studentName;
    string studentID;
};
#endif //FUNDAMENTALS3_STUDENTS_H
