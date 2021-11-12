//
// Created by Usuario on 12/11/2021.
//

#ifndef EJEMPLOREPOSITORIO_MANAGMENTSTUDENTS_H
#define EJEMPLOREPOSITORIO_MANAGMENTSTUDENTS_H

#include "Student.h"
#include <vector>

using namespace std;

class ManagmentStudents {
public:
    ManagmentStudents();
    Student* findStudent(string);
    bool addStudent(string, string, char, short int);
    vector<Student*> getStudents();

    virtual ~ManagmentStudents();

private:
    vector<Student*> students;
};


#endif //EJEMPLOREPOSITORIO_MANAGMENTSTUDENTS_H
