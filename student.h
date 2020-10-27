#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>

using namespace std;

class student {
 public:
  //constructor
  student(int Id, float Gpa, char* NameFirst, char* NameLast);
  //get student function
  student* getStudent();
 private:
  //student variables
  int id;
  char* nameFirst;
  char* nameLast;
  float gpa;
};
#endif
