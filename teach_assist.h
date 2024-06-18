#ifndef TEACHING_ASSISTANT_H
#define TEACHING_ASSISTANT_H

#include <iostream>
#include "teacher.h"
#include "student.h"
using namespace std;

namespace UMS
{
    namespace Department
    {
        class TeachingAssistant : public Teacher, public Student
        {
        public:
            // Default constructor 
            TeachingAssistant();
            // Parameterized constructor
            TeachingAssistant(int id, string name);
            // Copy constructor
            TeachingAssistant(const TeachingAssistant& other);
            // Destructor
            ~TeachingAssistant();
            // assignment operator
            TeachingAssistant& operator=(const TeachingAssistant& other);
            void display() const;
        };
    }
}


#endif