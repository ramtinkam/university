#include <iostream>
#include <string>
#include "Person.h"
#include "Course.h"
#include "Student.h"

using namespace std;


Student::Student(string f,string l,string i,double w,Course* c,string fi,int n):Person(f,l,i,w){
    courses = new Course[n];
    for(int i=0;i<n;i++){
        courses[i]=c[i];
    }
    FieldOfStudy=fi;
    numOfCourses=n;
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
