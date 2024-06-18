#include "course.h"
using namespace UMS::Department;

int Course :: m_nCountCourses = 0;
    
// Default constructor 
// Member initialization list
Course:: Course() : m_nId(0), m_nCreditHrs(3), m_szName("") 
{
    m_nCountCourses += 1;
    //cout << "Course default constructor called\n";
}

// Parameterized constructor
Course :: Course(int id, int crHrs, string name) : m_nId(id) 
{
    m_nCreditHrs = crHrs;
    m_szName = name;
    m_nCountCourses += 1;
    //cout << "Course parameterized constructor called\n";

}

// Destructor
Course :: ~Course() 
{
    //cout << "Course destructor called\n";
}

string Course::getName()
{
    return m_szName;
}

void Course :: display() const
{
    cout << "Course ID: " << m_nId << "\n";
    cout << "Coures Name is : " << (m_szName) << "\n";
    cout << "Course Credit Hours are: " << (m_nCreditHrs) << "\n";
}
 