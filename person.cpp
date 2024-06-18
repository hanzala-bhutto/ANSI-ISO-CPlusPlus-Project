#include "person.h"
using namespace UMS::Department;

// Default constructor 
// Member initialization list
Person :: Person() : m_nId(0), m_szName("")
{
    //cout << "Person default constructor called\n";
}

// Parameterized constructor
Person :: Person(int id, string name) : m_nId(id)
{
    m_szName = name;
    //cout << "Person parameterized constructor called\n";
}

// Destructor
Person :: ~Person() 
{
    //cout << "Person destructor called\n";
}

int Person::getId()
{
    return m_nId;
}

string Person::getName()
{
    return m_szName;
}