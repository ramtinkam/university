#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Professor.h"

using namespace std;

    class University{
        private:
        int budget;
        int numOfProfessors;
        int numOfStudents;
        Professor* pArray;
        Student* sArray;
        public:
        University();
        University(int,int,int,Professor*,Student*);
        University(const University&);
        ~University();
    };






#endif