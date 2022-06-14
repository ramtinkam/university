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
        int getBudget()const;
        int getNumOfProfessors()const;
        int getNumOfStudents()const;
        Professor* getpArray()const;
        Student* getsArray()const;
        void setBudget(int);
        void setNumOfPorfessors(int);
        void setNumOfStudents(int);
        void setpArray(Professor*);
        void setsArray(Student*);
        void sort(Student*);
        void sort(Professor*);
        friend ostream& operator <<(ostream& ,University&);
        friend istream& operator >>(istream&, University&);
        double averageGpa();
        double averageGpaOfField(string);
        double averageMarkOfCourse(string);

    };






#endif