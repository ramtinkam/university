#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

Course::Course(){
    mark = new double;
}
Course::Course(string n,int u,double m){
    mark = new double;
    *mark=m;
    unit=u;
    name=n;
}
Course::Course(const Course &a){
    mark = new double;
    *mark = *(a.mark);
    unit=a.unit;
    name=a.name;
}
Course::~Course(){
    delete mark;
} 

string Course::getname() const{
    return name;
}

int Course::getunit() const{
    return unit;
}

double* Course::getmark() const{
    return mark;
}

void Course::setname(string n){
    name=n;
}

void Course::setunit(int u){
    unit=u;
}

void Course::setmark(double m){
    *mark=m;
}

ostream& operator <<(ostream& out,const Course& a){
    out<<a.getname()<<" "<<a.getunit()<<" "<<*(a.getmark())<<"\n";
    return out;
}

istream& operator >>(istream& in,Course& a){
    cout<<"enter name unit and mark:\n";
    string n;
    int u;
    double m;
    in>>n>>u>>m;
    a.setname(n);
    a.setunit(u);
    a.setmark(m);
    return in;
}
