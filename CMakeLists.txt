# CMakeList.txt : CMake project for TrainingProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (TrainingProject "TrainingProject.cpp" "TrainingProject.h" "course.cpp" "course.h" "department.cpp" "department.h"  "person.cpp" "person.h" "student.cpp" "student.h" "teach_assist.cpp" "teach_assist.h" "teacher.cpp" "teacher.h" "university.cpp" "university.h" "Enums/enums.h")

# TODO: Add tests and install targets if needed.
