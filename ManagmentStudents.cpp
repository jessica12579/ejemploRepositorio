//
// Created by Usuario on 12/11/2021.
//

#include "ManagmentStudents.h"

ManagmentStudents::ManagmentStudents() {}


Student *ManagmentStudents::findStudent(string code) {
    for (Student *student:students) {
        if (student->getCode().compare(code) == 0) {
            return student;
        }
        return nullptr;
    }
}

    bool ManagmentStudents::addStudent(string code, string name, char sensor, short age) {
        if (findStudent(code) == nullptr) {
            students.push_back(new Student(code, name, sensor, age));
            return true;
        }
        return false;
    }
    std::vector<Student*> ManagmentStudents::getStudents(){
    return students;
    };

    ManagmentStudents::~ManagmentStudents() {
        for (Student* studient:students) {
            delete(studient);
        }
    }



