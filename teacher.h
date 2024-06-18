#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include "person.h"
using namespace std;

namespace UMS
{
    namespace Department
    {
        class Teacher : virtual public Person
        {
        public:
            // Default constructor
            Teacher();
            // Parameterized constructor
            Teacher(int id, string name);
            // Copy constructor
            Teacher(const Teacher& other);
            // Destructor
            ~Teacher();
            // Copy assignment operator
            Teacher& operator=(const Teacher& other);
            void display() const;
        public:
            static int m_nCountTeachers;
        };
    }
}


#endif