//
// Created by Usuario on 12/11/2021.
//

#ifndef EJEMPLOREPOSITORIO_STUDENT_H
#define EJEMPLOREPOSITORIO_STUDENT_H
#include <string>
#include <ostream>


class Student {
public:
    Student();

    Student(const std::string &code, const std::string &name, char sensor, short age);

    virtual ~Student();

    const std::string &getCode() const;

    void setCode(const std::string &code);

    const std::string &getName() const;

    void setName(const std::string &name);

    char getSensor() const;

    void setSensor(char sensor);

    short getAge() const;

    void setAge(short age);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);

private:
    std::string code;
    std::string name;
    char sensor;
    short int age;
};


#endif //EJEMPLOREPOSITORIO_STUDENT_H
