#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "person.h"
using namespace std;

namespace UMS
{
    namespace Department
    {
        class Student : virtual public Person
        {
        public:
            // Default constructor 
            Student();
            // Parameterized constructor
            Student(int id, string name);
            // Copy constructor
            Student(const Student& other);
            // Destructor
            ~Student();
            // assignment operator
            Student& operator=(const Student& other);
            void display() const;
        public:
            static int m_nCountStudents;
        };
    }
}


#endif