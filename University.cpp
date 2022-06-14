#include <string>
#include <iostream>
#include <vector>
#include <fstream>
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

int University::getBudget()const{return budget;}
int University::getNumOfProfessors()const{return numOfProfessors;}
int University::getNumOfStudents()const{return numOfStudents;}
Professor* University::getpArray()const{return pArray;}
Student* University::getsArray()const{return sArray;}

void University::setBudget(int b){budget=b;}
void University::setNumOfPorfessors(int np){numOfProfessors=np;}
void University::setNumOfStudents(int ns){numOfStudents=ns;}
void University::setpArray(Professor* p){pArray=p;}
void University::setsArray(Student* s){sArray=s;}

void University::sort(Student* a){
    int year[numOfStudents];
    for(int i=0;i<numOfStudents;i++){
        string id=a[i].getid();
        id.erase(id.begin()+2,id.end());
        year[i]=stoi(id);
        if(year[i]==0){
            year[i]=100;
        }
    }
    int temp;
    Student sTemp;
    for(int i=0;i<numOfStudents-1;i++){
        for(int j=0;j<numOfStudents-i-1;j++){
            if(year[j]>year[j+1]){
                temp = year[j];
                year[j]=year[j+1];
                year[j+1]=temp;
                sTemp=a[j];
                a[j]=a[j+1];
                a[j+1]=sTemp;
            }
            else if(year[j]==year[j+1] && a[j].getlastname()>a[j+1].getlastname()){
                temp = year[j];
                year[j]=year[j+1];
                year[j+1]=temp;
                sTemp=a[j];
                a[j]=a[j+1];
                a[j+1]=sTemp;
            }
        }

    }
}
void University::sort(Professor* a){
    int year[numOfProfessors];
    for(int i=0;i<numOfProfessors;i++){
        string id=a[i].getid();
        id.erase(id.begin()+2,id.end());
        year[i]=stoi(id);
        if(year[i]==0){
            year[i]=100;
        }
    }
    int temp;
    Professor pTemp;
    for(int i=0;i<numOfProfessors-1;i++){
        for(int j=0;j<numOfProfessors-i-1;j++){
            if(year[j]>year[j+1]){
                temp = year[j];
                year[j]=year[j+1];
                year[j+1]=temp;
                pTemp=a[j];
                a[j]=a[j+1];
                a[j+1]=pTemp;
            }
            else if(year[j]==year[j+1] && a[j].getlastname()>a[j+1].getlastname()){
                temp = year[j];
                year[j]=year[j+1];
                year[j+1]=temp;
                pTemp=a[j];
                a[j]=a[j+1];
                a[j+1]=pTemp;
            }
        }

    }
}

ostream& operator <<(ostream& out,University& a){
    out<<"budget: "<<a.getBudget()<<" numOfProfessors:"<<a.getNumOfProfessors()<<" numOfStudents:"<<a.getNumOfStudents()<<"\n";
    a.sort(a.getpArray());
    a.sort(a.getsArray());
    Professor* x=a.getpArray();
    Student* y=a.getsArray(); 
    for(int i=0;i<a.getNumOfProfessors();i++){
        out<<x[i];
    }
    for(int i=0;i<a.getNumOfStudents();i++){
        out<<y[i];
    }
    out<<"\n";
    return out;

}
istream& operator>>(istream& in,University& a){
    int b,np,ns;
    cout<<"enter budget, numOfProfessors and numOfStudents\n";
    in>>b>>np>>ns;
    a.setBudget(b);
    a.setNumOfPorfessors(np);
    a.setNumOfStudents(ns);
    Professor* p=new Professor[np];
    Student* s=new Student[ns];
    for(int i=0;i<np;i++){
        in>>p[i];
    }
    for(int i=0;i<ns;i++){
        in>>s[i];
    }
    a.setpArray(p);
    a.setsArray(s);
    return in;
}

double University::averageGpa(){
    double avgGpa=0;
    for (int i=0;i<numOfStudents;i++){
        avgGpa += sArray[i].gpa();
    }
    avgGpa = avgGpa/numOfStudents;
    return avgGpa;
}

double University::averageGpaOfField(string f){
    double avgGpa=0,num=0;
    for (int i=0;i<numOfStudents;i++){
        if (sArray[i].getFieldOfStudy()==f){
            num++;
            avgGpa += sArray[i].gpa();
        }
    }
    avgGpa = avgGpa/num;
    return avgGpa;
}

double University::averageMarkOfCourse(string c){
    double avgGpa=0,num=0;
    for (int i=0;i<numOfStudents;i++){
        Course*  co=sArray[i].getcourses(); 
        for(int j=0;j<sArray[i].getnumOfCourses();j++){
            if (co[j].getname()==c){
                num++;
                avgGpa += *co[j].getmark();
            }
        }
    }
    avgGpa = avgGpa/num;
    return avgGpa;

}

void University::printCourses(){
    vector<string> courseNames;
    vector<double> courseGpa;
    bool flg=true;
    for (int j=0;j<this->getNumOfStudents();j++){
        Course* c=sArray[j].getcourses();
        for(int i=0;i<sArray[j].getnumOfCourses();i++){
            flg=true;
            for(string it:courseNames)
                if(it==c[i].getname())
                    flg=false;
            if(flg==true){
                courseNames.push_back(c[i].getname());
                courseGpa.push_back(this->averageMarkOfCourse(c[i].getname()));
            }
            
        }
    }

    string cn[courseNames.size()];
    double cg[courseGpa.size()];
    auto itd=courseGpa.begin();
    int r=0;
    for(auto its=courseNames.begin();its!=courseNames.end();its++){
        cn[r]=*its;
        cg[r]=*itd;
        r++;
        itd++;
    }


    string stemp;
    double dtemp;
    for(int i=0;i<courseNames.size()-1;i++){
            for(int j=0;j<courseNames.size()-i-1;j++){
                if(cg[j]>cg[j+1]){
                    stemp = cn[j];
                    cn[j]=cn[j+1];
                    cn[j+1]=stemp;
                    dtemp = cg[j];
                    cg[j]=cg[j+1];
                    cg[j+1]=dtemp;
                }
            }
    }
    for(int i=0;i<courseNames.size();i++){
        cout<<cn[i]<<" "<<cg[i]<<"\n";
    }
    
}

bool University::isEnoughBudget(){
    int b=0;
    for(int i=0;i<this->getNumOfProfessors();i++){
        b += pArray[i].calculateSalary();
    }
    for(int i=0;i<this->getNumOfStudents();i++){
        b += sArray[i].calculateSalary();
    }
    if(b>budget)
        return false;
    else 
        return true;

}

void University::saveToFile(){
    vector<string> fields;
    vector<double> gpa;
    vector<string> name;
    vector<string> id;
    bool flg;
    for(int i=0;i<this->getNumOfStudents();i++){
        flg=true;
         int j=0;
        for(string it:fields){
            if (it==sArray[i].getFieldOfStudy()){
                if(gpa.at(j)<sArray[i].gpa()){
                    gpa.at(j)=sArray[i].gpa();
                    name.at(j)=sArray[i].getfirstname()+" "+sArray[i].getlastname();
                    id.at(j)=sArray[i].getid();
                }
                flg=false;
            }
            j++;
        }
        if(flg){
            fields.push_back(sArray[i].getFieldOfStudy());
            gpa.push_back(sArray[i].gpa());
            name.push_back(sArray[i].getfirstname()+" "+sArray[i].getlastname());
            id.push_back(sArray[i].getid());
        }
    }
    ofstream file;
    file.open("students.txt",ios::trunc);
    int r=0;
    for(string it:fields){
        file<<it<<" "<<name.at(r)<<" "<<id.at(r)<<" "<<gpa.at(r)<<"\n";
        r++;
    }

}