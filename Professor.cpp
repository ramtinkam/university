#include <iostream>
#include <string>
#include "Person.h"
#include "Professor.h"

using namespace std;

Professor::Professor():Person(){}
Professor::Professor(string f,string l,string i,double w,string t):Person(f,l,i,w){
    title = t;
    if(!validate()){
        cout<<"invalid id";
        exit(0);
    }
}
Professor::Professor(const Professor& a):Person(a){
    title=a.title;
    if(!validate()){
        cout<<"invalid id";
        exit(0);
    }
}

string Professor::getTitle()const{return title;}
void Professor::setTitle(string t){title=t;}

ostream& operator <<(ostream& out,const Professor& a){
    out<<a.getfirstname()<<" "<<a.getlastname()<<" id:"<<a.getid()<<" workHours:"<<*(a.getworkHours())<<" title:"<<a.getTitle()<<"\n";
    return out;
}
istream& operator >>(istream& in,Professor& a){
    cout<<"enter firstname, lastname, id, workHours and title:\n";
    string f,l,i,t;
    double w;
    in>>f>>l>>i>>w>>t;
    a.setfirstname(f);
    a.setlastname(l);
    a.setid(i);
    a.setworkHours(w);
    a.setTitle(t);
    return in;
}

bool Professor::validate(){
    string i=this->getid();
    if(Person::validate() && i[2]=='#' && i.length()==8){
        return true;
    }
    else{
        return false;
    }
}

double Professor::calculateSalary(){
    double multiplier=50000;
    string i=this->getid();
    i.erase(i.begin()+2,i.end());
    double years =101-stod(i);
    multiplier += years*2000;
    if(this->title=="Assistant Professor"){
        multiplier += 10000;
    }
    else if(this->title=="Associate Professor"){
        multiplier += 20000;
    }
    else if(this->title=="Professor"){
        multiplier += 30000;
    }
    double x= *(this->getworkHours());
    double salary = x*multiplier;
    return salary;
}
