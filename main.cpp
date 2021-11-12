    #include <iostream>
    #include <cstdlib>
    #include "Student.h"
#include "ManagmentStudents.h"

    using namespace std;

void *mngStudents(){
    ManagmentStudents *mng = new ManagmentStudents();

    mng->addStudent("29123", "Jessica Aranguren", 'h', 19);
    mng->addStudent("12345", "Pablito", 'z', 56);

    for( Student* student : mng->getStudents()){
        cout<<*student<<endl;
    }

    delete( mng );
}

int main() {
   mngStudents();
    return EXIT_SUCCESS;
}
