#include <iostream>
#include <string>
#include "Person.h"
#include "Professor.h"

using namespace std;

Professor::Professor(string f,string l,string i,double w,string t):Person(f,l,i,w){
    title = t;
}
Professor::Professor(const Professor& a):Person(a){
    title=a.title;
}