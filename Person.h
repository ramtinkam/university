#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

    class Person{
        private:
        string firstname;
        string lastname;
        string id;
        double *workHours;
        public:
        Person();
        Person(string ,string ,string ,double);
        Person(const Person&);
        ~Person();
        
        
    };











#endif    