#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stuId, const char n[]) {
  studentId = stuId;
  strcpy(name,n);
  
  
}

// Display StudentId and Name
void Student::display() {

  cout<< "Student ID = " << studentId << endl;
  cout<< "Student name = " << name << endl;
  
}
