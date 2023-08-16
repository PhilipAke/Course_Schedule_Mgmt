#include "degreeplan.h"
#include "students.h"
#include <iostream>
#include <string>
#include <fstream>
void DegreePlan::welcomeMenu(){
    cout << "Welcome to the Main Menu" << endl;
    cout << "Please select an option" << endl;
    cout << "1) View Degree Plans" << endl;
    cout << "2) View Student Information" << endl;
    cout << "3) Exit" << endl;
    string choice;
    getline(cin, choice);
    if (choice == "1"){
        DegreePlan degreePlan;
        degreePlan.showDegreePlans();

    }
    else if (choice == "2"){
        Students student;
        student.studentMenu();

    }
    else if (choice == "3"){
        cout << "Exiting Program" << endl;
    }
    else {
        cout << "Invalid Input Please Try Again." << endl;

    }

}
int main() {
    DegreePlan m;
    m.welcomeMenu();
    return 0;

}