#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <cstring>
#include <vector>
#include "department.h"
#include "Enums/enums.h"
using namespace std;
using namespace UMS::University;

namespace UMS
{
    class CUniversity
    {
    public:
        // Default constructor
        CUniversity();
        // Parameterized constructor
        CUniversity(ENUniversities name);
        // Copy constructor
        CUniversity(const CUniversity* other);
        // Destructor
        ~CUniversity();
        // Copy assignment operator
        CUniversity* operator=(const CUniversity *other);
        void addDepartment(const CDepartment& department);
        void display() const;
        bool findDepartment(string name);
        bool findStudent(int id);
        bool findTeacher(string name);
        bool findCourse(string name);
        bool findStudentInCourse(int id, string name);
    private:
        ENUniversities m_szName;
        vector<CDepartment> m_vDepartments;
    };
}
#endif