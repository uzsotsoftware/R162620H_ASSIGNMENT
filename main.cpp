/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R162620H
 *
 * Created on October 5, 2017, 11:02 AM
 */

#include <cstdlib>
#include <iostream>
#include<fstream>
using namespace std;

class students {
    string regNum;
    string firstName;
    string surname;
    int age;

public:

    void SetRegnum(string thisRG) {
        regNum = thisRG;
    }

    void SetFirstname(string thisFN) {
        firstName = thisFN;
    }

    void SetSurname(string thisSN) {
        surname = thisSN;
    }

    void SetRegnum(int thisAge) {
        age = thisAge;
    }

    string GetRegnum() {
        return regNum;
    }

    string GetFirstname() {
        return firstName;
    }

    string GetSurname() {
        return surname;
    }
    int SetAge(int thisAge){
        age=thisAge;
    }
    int GetAge() {
        return age;
    }
};

/*
 * 
 */
int main(int argc, char** argv) {
    students student;
    string localRN;
    string localFN;
    string localSN;
    int localAge;
    cout << "Enter Registration Number..";
    cin >> localRN;
    student.SetRegnum(localRN);
    cout << "Enter First Name..";
    cin >> localFN;
    student.SetFirstname(localFN);
    cout << "Enter Surname..";
    cin >> localSN;
    student.SetSurname(localSN);
    cout << "Enter Age..";
    cin >> localAge;
    student.SetAge(localAge);
    
    ofstream studentsFile("Files\\students", ios::binary);
    studentsFile.write((char*) &student, sizeof (students));
    if (studentsFile)
        cout << "Record saved successfully" << endl;
    studentsFile.close();


    return 0;
}

