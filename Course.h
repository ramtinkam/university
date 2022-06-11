#ifndef COURSE_H
#define COURSE_H

#include <string>

using namespace std;

    class Course{
        private:
        string name;
        int unit;
        double* mark;

        public:
        Course();
        Course(string ,int ,double );
        Course(const Course&);
        ~Course();
        string getname() const;
        int getunit() const;
        double* getmark() const;
        void setname(string);
        void setunit(int);
        void setmark(double);
        friend ostream& operator <<(ostream&,const Course&);
        friend istream& operator >>(istream&, Course&);
        Course& operator =(const Course&);
    };

#endif