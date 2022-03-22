#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stuId, string n) {
  studentId = stuId;
  name = n;
  
  
}

// Display StudentId and Name
Student::display() {

  cout<< "Student ID = " << studentId << endl;
  cout<< "Student name = " << name << endl;
  
}
