    #include <iostream>
    #include <cstdlib>
#include "Student.h"

    using namespace std;

int main() {
    Student *pepe = new Student("3456", "34567", 'hola', 34);

    cout<< *pepe<<endl;
    delete(pepe);
    return EXIT_SUCCESS;
}
