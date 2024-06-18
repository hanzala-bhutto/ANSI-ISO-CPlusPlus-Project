#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

namespace UMS
{
    namespace Department
    {
        class Course
        {
        public:
            // Default constructor 
            Course();
            // Parameterized constructor
            Course(int id, int crHrs, string name);
            // Destructor
            ~Course();
            string getName();
            void display() const;
        private:
            int m_nId;
            int m_nCreditHrs;
            string m_szName;
        public:
            static int m_nCountCourses;
        };
    }
}

#endif