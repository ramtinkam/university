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

string Person::getfirstname()const{
    return firstname;
}
string Person::getlastname()const{
    return lastname;
}
string Person::getid()const{
    return id;
}
double* Person::getworkHours()const{
    return workHours;
}

void Person::setfirstname(string a){
    firstname=a;
}
void Person::setlastname(string a){
    lastname=a;
}
void Person::setid(string a){
    id=a;
}
void Person::setworkHours(double a){
    *workHours=a;
}

ostream& operator <<(ostream& out, const Person& a){
    out<<a.getfirstname()<<" "<<a.getlastname()<<" "<<a.getid()<<" "<<*(a.getworkHours())<<"\n";
    return out;
}
istream& operator >>(istream& in, Person& a){
    cout<<"enter firstname lastname id and workHours:\n";
    string f,l,i;
    double w;
    in>>f>>l>>i>>w;
    a.setfirstname(f);
    a.setlastname(l);
    a.setid(i);
    a.setworkHours(w);
    return in;
}