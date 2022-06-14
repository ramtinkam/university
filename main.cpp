#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "University.h"

using namespace std;

// static dynamic physic english farsi ap math

int main(){
    //professors
    Professor p[3];
    p[0]=Professor("sajad","zavar","92#22222",20,"Professor");
    p[1]=Professor("ashkan","ashkani","91#22222",40,"Assistant Professor");
    p[2]=Professor("erfan","erfani","86#22222",47,"Instructor");


    //courses for each student
    Course c1[2],c2[3],c3[3],c4[2],c5[3],c6[3],c7[2],c8[3],c9[3],c10[2],c11[3],c12[3];
    c1[0]=Course("english",2,19);
    c1[1]=Course("math",3,13);
    c1[2]=Course("static",2,13.5);
    c2[0]=Course("static",3,17.4);
    c2[1]=Course("farsi",2,18.3);
    c2[2]=Course("ap",2,13.5);
    c3[0]=Course("static",3,20);
    c3[1]=Course("physic",2,18.3);
    c3[2]=Course("dynamic",2,19.5);
    c4[0]=Course("static",3,14);
    c4[1]=Course("physic",2,13.3);
    c4[2]=Course("ap",2,15.5);
    c5[0]=Course("static",3,8);
    c5[1]=Course("physic",2,17.7);
    c5[2]=Course("math",2,14.5);
    c6[0]=Course("static",3,12);
    c6[1]=Course("farsi",2,13.3);
    c6[2]=Course("dynamic",2,20);
    c7[0]=Course("english",3,20);
    c7[1]=Course("physic",2,13.3);
    c7[2]=Course("ap",2,16.5);
    c8[0]=Course("static",3,20);
    c8[1]=Course("physic",2,18);
    c8[2]=Course("dynamic",2,13.5);
    c9[0]=Course("ap",3,20);
    c9[1]=Course("english",2,17.3);
    c9[2]=Course("dynamic",2,19.9);
    c10[0]=Course("static",3,2);
    c10[1]=Course("english",2,8.3);
    c10[2]=Course("ap",2,9.5);
    c11[0]=Course("static",3,13);
    c11[1]=Course("math",2,18.7);
    c11[2]=Course("farsi",2,18.75);
    c12[0]=Course("ap",3,13.9);
    c12[1]=Course("english",2,11);
    c12[2]=Course("farsi",2,17.5);
    



    //students
    Student s[12];
    s[0]=Student("ali","alavi","89*sd33333",30,c1,"ce",2);
    s[1]=Student("reza", "razavi","89*w12312",47,c2,"cs",3);
    s[2]=Student("reza", "rajabi","99*12212",21,c3,"ce",3);
    s[3]=Student("ramtin", "kamanian","00*rk12212",20,c4,"math",3);
    s[4]=Student("ramin", "kamali","84*e12212",12,c5,"cs",3);
    s[5]=Student("amin", "kamalain","88*w12212",3,c6,"ce",3);
    s[6]=Student("amin", "amini","85*12212",14,c7,"math",3);
    s[7]=Student("iman", "imani","85*12212",17,c8,"cs",3);
    s[8]=Student("amirreza", "rezayi","85*12212",31,c9,"ce",3);
    s[9]=Student("saeed", "saeedi","85*12212",42,c10,"cs",3);
    s[10]=Student("amirali", "amiri","85*12212",29,c11,"math",3);
    s[11]=Student("jamal", "jamali","85*jo12212",80,c12,"ce",3);


    University a(2000000,3,12,p,s);
    //calling each function
    cout<<a.averageGpa()<<"\n";
    cout<<a.averageGpaOfField("cs")<<" "<<a.averageGpaOfField("ce")<<" "<<a.averageGpaOfField("math")<<"\n";
    cout<<a.averageMarkOfCourse("farsi")<<" "<<a.averageMarkOfCourse("english")<<" "<<a.averageMarkOfCourse("math")<<" "<<a.averageMarkOfCourse("ap")<<" "<<a.averageMarkOfCourse("physic")<<" "<<a.averageMarkOfCourse("static")<<" "<<a.averageMarkOfCourse("dynamic")<<"\n";
    a.printCourses();
    cout<<a.isEnoughBudget();
    a.saveToFile();
    cout<<a;

    return 0;
}

