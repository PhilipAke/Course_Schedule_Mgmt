//
// Created by philip ake on 7/30/23.
//

#ifndef FUNDAMENTALS3_SCHEDULE_H
#define FUNDAMENTALS3_SCHEDULE_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <regex>
#include <cstring>
#include <sstream>
#include "degreeplan.h"
using namespace std;
class Schedule {
public:
    void classSchedule() {
        cout << "Please enter student ID" << endl;
        cin.ignore();
        getline(cin, studentID);
        currentFile.open("/Users/philipake/CLionProjects/Fundamentals3/students.txt");
        while (currentFile >> studentFname >> studentMname >> studentLname >> studentID2 >> studentMajor >> class1
                           >> class2 >> class3 >> class4) {
            if (studentID == studentID2) {
                cout << "Student's Schedule is "<< endl;
                    compSciSchedule();

                    compEngSchedule();

                    artSchedule();

                    mathSchedule();

                    businessSchedule();


            }
        }
        returnTOMENu();
    }
    void compSciSchedule(){
        ifstream is("/Users/philipake/CLionProjects/Fundamentals3/compSCIcourses.txt");
        string line;
        while (std::getline(is, line)) {
            if (line.find(class1) != std::string::npos) {
                cout << line << std::endl;
            }
            else if (line.find(class2) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class3) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class4) != std::string::npos){
                cout << line << std::endl;
            }
        }compEngSchedule();







    }
    void compEngSchedule(){
        ifstream is("/Users/philipake/CLionProjects/Fundamentals3/compENGcourses.txt");
        string line;
        while (std::getline(is, line)) {
            if (line.find(class1) != std::string::npos) {
                cout << line << std::endl;
            }
            else if (line.find(class2) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class3) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class4) != std::string::npos){
                cout << line << std::endl;
            }
        }
        artSchedule();
    }
    void artSchedule(){
        ifstream is("/Users/philipake/CLionProjects/Fundamentals3/arts.txt");
        string line;
        while (std::getline(is, line)) {
            if (line.find(class1) != std::string::npos) {
                cout << line << std::endl;
            }
            else if (line.find(class2) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class3) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class4) != std::string::npos){
                cout << line << std::endl;
            }
        }
        mathSchedule();
    }
    void mathSchedule(){
        ifstream is("/Users/philipake/CLionProjects/Fundamentals3/math.txt");
        string line;
        while (std::getline(is, line)) {
            if (line.find(class1) != std::string::npos) {
                cout << line << std::endl;
            }
            else if (line.find(class2) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class3) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class4) != std::string::npos){
                cout << line << std::endl;
            }
        }
        businessSchedule();
    }
    void businessSchedule(){
        ifstream is("/Users/philipake/CLionProjects/Fundamentals3/business.txt");
        string line;
        while (std::getline(is, line)) {
            if (line.find(class1) != std::string::npos) {
                cout << line << std::endl;
            }
            else if (line.find(class2) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class3) != std::string::npos){
                cout << line << std::endl;
            }
            else if (line.find(class4) != std::string::npos){
                cout << line << std::endl;
            }
        }
        returnTOMENu();
    }
    void returnTOMENu(){
        cout << "Press 1 to return to main menu" << endl;
        DegreePlan degreePlan;
        degreePlan.welcomeMenu();
    }


private:
    string studentID;
    string studentFname, studentMname, studentLname, studentID2, studentMajor, class1, class2, class3, class4;
    fstream currentFile;
};
#endif //FUNDAMENTALS3_SCHEDULE_H
