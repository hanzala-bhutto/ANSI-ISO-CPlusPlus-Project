
#include "teach_assist.h"

using namespace UMS::Department;


// Default constructor 
TeachingAssistant::TeachingAssistant()
{
    m_nId = 0;
    m_szName = "";
    //cout << "Teaching Assistant default constructor called\n";
}

// Parameterized constructor
TeachingAssistant::TeachingAssistant(int id, string name)
{
    m_nId = id;
    m_szName = name;            
    //cout << "Teaching Assistant parameterized constructor called\n";
}

// Copy constructor
TeachingAssistant::TeachingAssistant(const TeachingAssistant& other) 
{
    m_nId=other.m_nId;
    m_szName = other.m_szName;
    //cout << "Teaching Assistant copy constructor called\n";
}

// Destructor
TeachingAssistant::~TeachingAssistant() 
{
    //cout << "Teaching Assistant destructor called\n";
}

// assignment operator
TeachingAssistant& TeachingAssistant::operator=(const TeachingAssistant& other) 
{
    // check if it is assigning to itself
    if (this == &other) return *this; 

    try
    {
        m_nId = other.m_nId;
        m_szName = other.m_szName;
        //cout << "Teaching Assistant assignment operator called\n";
        return *this;
    }
    catch(exception ex)
    {
        cout << ex.what() << "\n";
    } 
}

void TeachingAssistant::display() const 
{
    cout << "Teaching Assistant ID: " << m_nId << "\n";
    cout << "Name: " << (m_szName) << "\n";
}
