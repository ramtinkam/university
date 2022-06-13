#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <string>

using namespace std;

    class Professor : public Person{
        private:
        string title;
        public:
        Professor(string ,string ,string ,double ,string);
        Professor(const Professor&);
    };




#endif