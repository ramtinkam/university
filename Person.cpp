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
    if(!validate()){
        cout<<"invalid id";
        exit(0);
    }
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
    out<<a.getfirstname()<<" "<<a.getlastname()<<" id:"<<a.getid()<<" workHours:"<<*(a.getworkHours())<<"\n";
    return out;
}
istream& operator >>(istream& in, Person& a){
    cout<<"enter firstname, lastname, id and workHours:\n";
    string f,l,i;
    double w;
    in>>f>>l>>i>>w;
    a.setfirstname(f);
    a.setlastname(l);
    a.setid(i);
    a.setworkHours(w);
    return in;
}

Person& Person::operator =(const Person& a){
    if(&a != this){
        firstname=a.firstname;
        lastname=a.lastname;
        id=a.id;
        *workHours=*(a.workHours);
    }
    return *this;
}

bool Person::validate (){
    string year;
    if(id.length()>=8 && id.length()<=10){
        string::iterator i=id.begin();
        for(int j=0;j<id.length();j++,i++){
            if(j<2){
                if(*i>='0' && *i<='9'){
                    year += *i;
                }
                else{
                    return false;
                }
            }
            if(j==2){
                if(*i>='0' && *i<='9'){
                    return false;
                }
            }
            if(j>2&&j<5){
                if(*i>='4' && *i<='6'){
                    return false;
                }
            }
            if(j>=5){
                if(!((*i<'4'&&*i>='0') ||(*i>'6'&&*i<='9'))){
                    return false;
                }
            }
        }
        string::reverse_iterator r=id.rbegin();
        for(int x=0;x<7;x++,r++){
            if(x<5){
                if(!(*r>='0' && *r<='9')){
                    return false;
                }
            }
            else if(x==5){
                if(*r>='0' && *r<='9'){
                    return false;
                }

            }
        }
        if(!((stoi(year) >= 84 && stoi(year) <= 99) || stoi(year)==00)){
            return false;
        }
        return true;
    }
    else {
        return false;
    }
}
double Person::calculateSalary(){
    return *workHours*10000;
}