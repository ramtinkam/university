#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(){
    workHours = new double;
}

Person::Person(string f,string l,string i,double w){
    firstname = f;
    lastname = l;
    id = i;
    workHours = new double;
    *workHours=w;
}

Person::Person(const Person& a){
    firstname=a.firstname;
    lastname=a.lastname;
    id=a.id;
    workHours = new double;
    *workHours = *(a.workHours);
}

Person::~Person(){
    delete workHours;
}