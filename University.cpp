#include <string>
#include <iostream>
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "University.h"

using namespace std;

University::University(){
    pArray=NULL;
    sArray=NULL;
}
University::University(int b,int np,int ns,Professor* pa,Student* sa){
    budget=b;
    numOfProfessors=np;
    numOfStudents=ns;
    pArray=new Professor[np];
    for(int i=0;i<np;i++){
        pArray[i]=pa[i];
    }
    sArray=new Student[ns];
    for(int i=0;i<ns;i++){
        sArray[i]=sa[i];
    }
}
University::University(const University&a){
    budget=a.budget;
    numOfProfessors=a.numOfProfessors;
    numOfStudents=a.numOfStudents;
    pArray=new Professor[numOfProfessors];
    sArray=new Student[numOfStudents];
    for(int i=0;i<numOfProfessors;i++){
        pArray[i]=a.pArray[i];
    }
    for(int i=0;i<numOfStudents;i++){
        sArray[i]=a.sArray[i];
    }

}
University::~University(){
    delete []sArray;
    delete []pArray;
}