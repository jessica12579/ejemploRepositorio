//
// Created by Usuario on 12/11/2021.
//

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(const std::string &code, const std::string &name, char sensor, short age) : code(code), name(name),
                                                                                             sensor(sensor), age(age) {}

const std::string &Student::getCode() const {
    return code;
}

void Student::setCode(const std::string &code) {
    Student::code = code;
}

const std::string &Student::getName() const {
    return name;
}

void Student::setName(const std::string &name) {
    Student::name = name;
}

char Student::getSensor() const {
    return sensor;
}

void Student::setSensor(char sensor) {
    Student::sensor = sensor;
}

short Student::getAge() const {
    return age;
}

void Student::setAge(short age) {
    Student::age = age;
}

Student::~Student() {
cout<<"good bye"<<endl;
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "code: " << student.code << " name: " << student.name << " sensor: " << student.sensor << " age: "
       << student.age;
    return os;
}
