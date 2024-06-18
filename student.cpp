#include "student.h"
using namespace UMS::Department;

int Student :: m_nCountStudents = 0;

// Default constructor 
Student:: Student()
{
    m_nId=0; 
    m_szName = "";
    //m_nCountStudents += 1;
    //cout << "Student default constructor called\n";
}

// Parameterized constructor
Student:: Student(int id, string name)
{
    m_nId = id;
    m_szName = name;
    m_nCountStudents += 1;
    //cout << "Student parameterized constructor called\n";
}

// Copy constructor
Student:: Student(const Student& other)
{
    m_nId = other.m_nId;
    m_szName = other.m_szName;
    //cout << "Student copy constructor called\n";
}

// Destructor
Student:: ~Student() 
{
    //cout << "Student destructor called\n";
}

// assignment operator
Student& Student:: operator=(const Student& other) 
{
    // check if it is assigning to itself
    if (this == &other) return *this; 

    try
    {
        m_nId = other.m_nId;
        m_szName = other.m_szName;
        //cout << "Student assignment operator called\n";
        return *this;
    }
    catch(exception ex)
    {
        cout << ex.what() << "\n";
    } 

}

void Student:: display() const 
{
    cout << "Student ID: " << m_nId << "\n";
    cout << "Name: " << (m_szName) << "\n";
}
