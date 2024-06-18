#include <iostream>
#include "student.h"
#include "teacher.h"
#include "course.h"
#include "department.h"
#include "university.h"

using namespace std;
using namespace UMS;
using namespace University;
using namespace UMS::Department;

int main() 
{
    CUniversity *university1 = new CUniversity(FAST_NUCES);
    CDepartment dept1 = CDepartment("Software Engineering");
    Teacher teacher1 = Teacher(1, "Sir Abdul Rehman");
    Teacher teacher2 = Teacher(2, "Sir Muazzam");
    Student student1 = Student(1, "Hanzala Bhutto");
    Student student2 = Student(2, "Ali");
    Course course1 = Course(1, 3, "Programming Fundamentals");
    Course course2 = Course(2, 3, "Object Oriented Programmging");
    Course course3 = Course(3, 3, "Data Structures");

    dept1.addTeacher(teacher1);
    dept1.addTeacher(teacher2);
    dept1.addCourse(course1);
    dept1.addCourse(course2);
    dept1.addCourse(course3);
    dept1.addStudent(student1.getId(), student1);
    dept1.addStudent(student2.getId(), student2);
    dept1.addStudentToCourse(student1.getId(), course1.getName());
    dept1.addStudentToCourse(student2.getId(), course1.getName());
    university1->addDepartment(dept1);

    //Using copy constructor
    CUniversity *university2 = new CUniversity(*university1);
   // Using assignment operator  
    CUniversity *university3 = university1; 
    cout << "\nUniversity 2 (Copy of University 1):\n";
    university2->display();
    cout << "\nUniversity 3 (assigned from University 1):\n";
    university3->display();
   
    bool result1 = university1->findDepartment("Software Engineering");
    bool result2 = university1->findStudent(1);
    bool result3 = university1->findTeacher("Sir Muazzm");
    bool result4 = university1->findCourse("Programming Fundamentals");
    bool result5 = university1->findStudentInCourse(1, "Programming Fundamentals");

    cout << "\nFound Department ? " << (result1 ? "yes" : "no") << endl << endl;
    cout << "\nFound Student ? " << (result2 ? "yes" : "no") << endl << endl;
    cout << "\nFound Teacher ? " << (result3 ? "yes" : "no") << endl << endl;
    cout << "\nFound Course ? " << (result4 ? "yes" : "no") << endl << endl;
    cout << "\nFound Student " << student1.getName() << " in Course " << course1.getName() << " ? " << (result5 ? "yes" : "no") << endl << endl;

    return 0;
}