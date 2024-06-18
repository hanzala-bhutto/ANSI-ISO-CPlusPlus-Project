#include "department.h"
using namespace UMS::University;
using namespace UMS::Department;

// Default constructor
CDepartment::CDepartment() : m_szName("")
{
    //cout << "Department default constructor called\n";
};

// Parameterized constructor
CDepartment::CDepartment(string name)
{
    m_szName = name;
    //cout << "Department parameterized constructor called\n";
};

// Copy constructor
CDepartment::CDepartment(const CDepartment& other)
{
    m_szName = other.m_szName;
    m_MStudents = other.m_MStudents;
    m_vTeachers = other.m_vTeachers;
    m_vCourses = other.m_vCourses;
    //cout << "Department copy constructor called\n";
};

// Destructor
CDepartment:: ~CDepartment()
{
    //cout << "Department destructor called\n";
};

// Copy assignment operator
CDepartment& CDepartment:: operator=(const CDepartment& other)
{
    // Self-assignment check
    if (this == &other) return *this;

    try
    {
        m_szName = other.m_szName;
        m_MStudents = other.m_MStudents; 
        m_vTeachers = other.m_vTeachers; 
        m_vCourses = other.m_vCourses;
        //cout << "Department copy assignment operator called\n";
        return *this;
    }
    catch(exception ex)
    {
        cout << ex.what() << "\n";
    } 
};

string CDepartment::getName()
{
    return m_szName;
}

unordered_map<int, Student> CDepartment::getStudents()
{
    return m_MStudents;
}

vector<Teacher> CDepartment::getTeachers()
{
    return m_vTeachers;
}

vector<Course> CDepartment::getCourses()
{
    return m_vCourses;
}


unordered_map<string, set<int>> CDepartment::getCourseStudentAssoc()
{
    return m_MCourseStudentAssoc;
}

void CDepartment:: addStudent(int id, const Student& student)
{
    try
    {
        m_MStudents[id] = student;
    }
    catch (exception ex)
    {
        cout << "Exception is : " << (ex.what()) << endl;
    }
}

void CDepartment:: addTeacher(const Teacher& teacher)
{
    try
    {
        m_vTeachers.push_back(teacher);
    }
    catch (exception ex)
    {
        cout << "Exception is : " << (ex.what()) << endl;
    }
}

void CDepartment:: addCourse(const Course& course)
{
    try
    {
        m_vCourses.push_back(course);
    }
    catch (exception ex)
    {
        cout << "Exception is : " << (ex.what()) << endl;
    }
}

void CDepartment::addStudentToCourse(int id, string name)
{
    try
    {
        if (m_MCourseStudentAssoc.find(name) != m_MCourseStudentAssoc.end())
            m_MCourseStudentAssoc[name].insert(id);
        else
        {
            m_MCourseStudentAssoc[name] = {};
            m_MCourseStudentAssoc[name].insert(id);
        }
    }
    catch (exception ex)
    {
        cout << "Exception is : " << (ex.what()) << endl;
    }
}


void CDepartment:: print() const
{
    cout << "Department Name: " << (m_szName) << "\n";
    cout << "\nTotal Students are : " << Student::m_nCountStudents << "\n";
    for (const auto& iterator : m_MStudents) 
    {
        (iterator.second).display();
    }
    cout << "\nTotal Teachers are : " << Teacher::m_nCountTeachers << "\n";
    for (const auto& m_vTeacher : m_vTeachers)
    {
        m_vTeacher.display();
    }
    cout << "\nTotal Courses are : " << Course::m_nCountCourses << "\n";
    for (const auto& m_vCourse : m_vCourses)
    {
        m_vCourse.display();
    }
    printCourseStudent();
}

void CDepartment::printCourseStudent() const
{
    for (auto x : m_MCourseStudentAssoc)
    {
        cout << x.first << endl;
        for (auto it : x.second)
        {
            cout << it << endl;
        }
    }
}