#include "university.h"
using namespace UMS;

// Default constructor
CUniversity::CUniversity() : m_szName(FAST_NUCES)
{
    //cout << "University default constructor called\n";
}

// Parameterized constructor
CUniversity::CUniversity(ENUniversities name)
{
    m_szName = name;
    //cout << "University parameterized constructor called\n";
}

// Copy constructor
CUniversity::CUniversity(const CUniversity* other)
{
    m_szName = other->m_szName;
    m_vDepartments = other->m_vDepartments;
    //cout << "University copy constructor called\n";
}

// Destructor
CUniversity::~CUniversity()
{
    //cout << "University destructor called\n";
}

// Copy assignment operator
CUniversity* CUniversity::operator=(const CUniversity* other)
{
    // check for self-assignment
    if (this == other) return this; 

    m_szName = other->m_szName;
    m_vDepartments = other->m_vDepartments; 
    //cout << "University copy assignment operator called\n";
    return this;
}

void CUniversity::addDepartment(const CDepartment& department)
{
    try
    {
        m_vDepartments.push_back(department);
    }
    catch(exception ex)
    {
        std::cerr << ex.what() << '\n';
    }
}

void CUniversity::display() const
{
    cout << "University Name: " << (universityNames.at(m_szName)) << "\n";
    for (const auto& m_vDepartment : m_vDepartments) 
    {
        m_vDepartment.print();
    }
    cout << "\n";
}

bool CUniversity::findDepartment(string name)
{
    for (vector<CDepartment> ::iterator dept = m_vDepartments.begin(); dept <m_vDepartments.end(); dept++)
    {
        if (dept->getName() == name)
            return 1;
    }
    return 0;

}

bool CUniversity::findStudent(int id)
{
    for (vector<CDepartment> ::iterator dept = m_vDepartments.begin(); dept < m_vDepartments.end(); dept++)
    {
        unordered_map<int, Student> students = dept->getStudents();

        if (students.find(id) != students.end())
            return 1;
    }
    return 0;
}

bool CUniversity::findTeacher(string name)
{
    for (vector<CDepartment> ::iterator dept = m_vDepartments.begin(); dept < m_vDepartments.end(); dept++)
    {
        vector<Teacher> teachers = dept->getTeachers();
        for (vector<Teacher>::iterator teacher = teachers.begin(); teacher < teachers.end(); teacher++)
        {
            if (teacher->getName() == name)
                return 1;
        }
    }
    return 0;
}


bool CUniversity::findCourse(string name)
{
    for (vector<CDepartment> ::iterator dept = m_vDepartments.begin(); dept < m_vDepartments.end(); dept++)
    {
        vector<Course> courses = dept->getCourses();

        for (vector<Course>::iterator course = courses.begin(); course < courses.end(); course++)
        {
            if (course->getName() == name)
                return 1;
        }
    }
    return 0;
}

bool CUniversity::findStudentInCourse(int id, string name)
{
    for (vector<CDepartment> ::iterator dept = m_vDepartments.begin(); dept < m_vDepartments.end(); dept++)
    {
        unordered_map<string, set<int>> courseStudentAssoc = dept->getCourseStudentAssoc();
    
        if (courseStudentAssoc.find(name) != courseStudentAssoc.end())
        {
            set<int> studentIds = courseStudentAssoc[name];
            if (studentIds.find(id) != studentIds.end())
            {
                return 1;
            }
        }
    }
    return 0;
}