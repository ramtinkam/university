#include <iostream>
#include <string>
#include "Course.h"
#include "Person.h"
#include "Student.h"

using namespace std;



int main(){
    Course* x=new Course [2];
    Course y("fuck", 2, 18.38),z("ass",3,18.50);
    x[0]=y;
    x[1]=z;
    Student a("ramtin","kamanian","91*k00929",12,x,"maaaaaaaaaa",2);
    cout<<a.calculateSalary();


    return 0;
}

