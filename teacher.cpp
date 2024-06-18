#include "teacher.h"
using namespace UMS::Department;

int Teacher:: m_nCountTeachers = 0;

// Default constructor
Teacher:: Teacher()  
{
    m_nId=0; 
    m_szName = "";
    m_nCountTeachers += 1;
    //cout << "Teacher default constructor called\n";
}

// Parameterized constructor
Teacher:: Teacher(int id, string name)
{
    m_nId = id;
    m_szName = name;
    m_nCountTeachers += 1;
    //cout << "Teacher parameterized constructor called\n";
}

// Copy constructor
Teacher :: Teacher(const Teacher& other)
{
    m_nId = other.m_nId;
    m_szName = other.m_szName;
    //cout << "Teacher copy constructor called\n";
}

// Destructor
Teacher :: ~Teacher() 
{
    //cout << "Teacher destructor called\n";
}

// Copy assignment operator
Teacher& Teacher :: operator=(const Teacher& other) 
{
    if (this == &other) return *this; // Self-assignment check
    
    try
    {
        m_nId = other.m_nId;
        m_szName = other.m_szName;
        //cout << "Teacher copy assignment operator called\n";
        return *this;
    }
    catch(exception ex)
    {
        cout << ex.what() << "\n";
    } 

}

void Teacher :: display() const
{
    cout << "Teacher ID: " << m_nId << "\n";
    cout << "Name: " << (m_szName) << "\n";
}
