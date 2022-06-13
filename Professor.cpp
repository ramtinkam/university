#include <iostream>
#include <string>
#include "Person.h"
#include "Professor.h"

using namespace std;

Professor::Professor():Person(){}
Professor::Professor(string f,string l,string i,double w,string t):Person(f,l,i,w){
    title = t;
}
Professor::Professor(const Professor& a):Person(a){
    title=a.title;
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
