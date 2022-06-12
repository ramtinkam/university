#include <iostream>
#include <string>
#include "Person.h"
#include "Course.h"
#include "Student.h"

using namespace std;

Student::Student():Person(){
    courses = NULL;
}
Student::Student(string f,string l,string i,double w,Course* c,string fi,int n):Person(f,l,i,w){
    courses = new Course[n];
    for(int i=0;i<n;i++){
        courses[i]=c[i];
    }
    FieldOfStudy=fi;
    numOfCourses=n;
    if(!validate()){
        cout<<"invalid id";
        exit(0);
    }
}
Student::Student(const Student& a):Person(a){
    courses = new Course[a.numOfCourses];
    for(int i=0;i<a.numOfCourses;i++){
        courses[i]=a.courses[i];
    }
    FieldOfStudy=a.FieldOfStudy;
    numOfCourses=a.numOfCourses;
}
Student::~Student(){
    delete []courses;
}

Course* Student::getcourses()const{return courses;}
string Student::getFieldOfStudy()const{return FieldOfStudy;}
int Student::getnumOfCourses()const{return numOfCourses;}

void Student::setFieldOfStudy(string f){
    FieldOfStudy=f;
}
void Student::setnumOfCourses(int n){
    numOfCourses=n;
}
void Student::setCourses(Course* c){
    courses=c;
}

ostream& operator <<(ostream& out,const Student& a){
    out<<a.getfirstname()<<" "<<a.getlastname()<<" id:"<<a.getid()<<" workHours:"<<*(a.getworkHours())<<" FieldOfStudy:"<<a.getFieldOfStudy()<<" number of courses:"<<a.getnumOfCourses()<<"\n";
    Course* c= a.getcourses();
    out<<"courses:\n";
    for (int i=0;i<a.getnumOfCourses();i++){
        out<<c[i];
    }
    return out;
}
istream& operator >>(istream& in,Student& a){
    cout<<"enter firstname, lastname, id, workHours, FieldOfStudy and numOfCourses:\n";
    string f,l,i,fi;
    int n;
    double w;
    in>>f>>l>>i>>w>>fi>>n;
    a.setfirstname(f);
    a.setlastname(l);
    a.setid(i);
    a.setworkHours(w);
    a.setFieldOfStudy(fi);
    a.setnumOfCourses(n);
    Course* c=new Course[n];
    for (int j=0;j<n;j++){
        in>>c[j];
    }
    if(a.getcourses()!=NULL){
        Course* x=a.getcourses();
        delete []x;
    }
    a.setCourses(c);
    return in;
}

bool Student::validate(){
    string i=this->getid();
    if(Person::validate() && (i[2]=='*')){
        return true;
    }
    else{
        return false;
    }
}

float Student::gpa(){
    float gpa=0.0;
    int units=0;
    for(int i=0;i<numOfCourses;i++){
        gpa += *(courses[i].getmark())*courses[i].getunit();
        units += courses[i].getunit();
    }
    gpa = gpa/units;
    return gpa;
}
