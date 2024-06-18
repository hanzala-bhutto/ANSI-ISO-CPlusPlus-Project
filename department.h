#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <set>
#include "student.h"
#include "teacher.h"
#include "course.h"
using namespace std;
using namespace UMS::Department;

namespace UMS 
{
    namespace University
    {
        class CDepartment
        {
        public:
            // Default constructor
            CDepartment();
            // Parameterized constructor
            CDepartment(string name);
            // Copy constructor
            CDepartment(const CDepartment& other);
            // Destructor
            ~CDepartment();
            // Copy assignment operator
            CDepartment& operator=(const CDepartment& other);
            string getName();
            unordered_map<int,Student> getStudents();
            vector<Teacher> getTeachers();
            vector<Course> getCourses();
            unordered_map<string, set<int>> getCourseStudentAssoc();
            void addStudent(int id, const Student& student);
            void addTeacher(const Teacher& teacher);
            void addCourse(const Course& course);
            void addStudentToCourse(int id, string name);
            void print() const;
            void printCourseStudent() const;
        private:
            string m_szName;
            unordered_map<int, Student> m_MStudents;
            vector<Teacher> m_vTeachers;
            vector<Course> m_vCourses;
            unordered_map<string, set<int>> m_MCourseStudentAssoc;
        };
    }
}


#endif