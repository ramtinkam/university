#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <string>

using namespace std;

    class Professor : public Person{
        private:
        string title;
        public:
        Professor();
        Professor(string ,string ,string ,double ,string);
        Professor(const Professor&);
        string getTitle()const;
        void setTitle(string);
        friend ostream& operator <<(ostream& ,const Professor&);
        friend istream& operator >>(istream& ,Professor&);
        bool validate();

    };




#endif