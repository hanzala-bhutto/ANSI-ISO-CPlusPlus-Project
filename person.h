#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

namespace UMS
{
    namespace Department
    {
        class Person
        {
        protected:
            // Default constructor 
            Person();
            // Parameterized constructor
            Person(int id, string name);
        public:
            // Destructor
            ~Person();
            int getId();
            string getName();
            virtual void display() const = 0;
        protected:
            int m_nId;
            string m_szName;
        };
    }
}

#endif