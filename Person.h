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
        string getfirstname()const;
        string getlastname()const;
        string getid()const;
        double* getworkHours()const;
        void setfirstname(string);
        void setlastname(string);
        void setid(string);
        void setworkHours(double);
        friend ostream& operator <<(ostream& , const Person&);
        friend istream& operator >>(istream& , Person&);
        Person& operator =(const Person&);
        bool validate();
        double calculateSalary();
        
        
    };











#endif    