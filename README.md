# Implementation-of-a-structure-based-Academic-Information-System
# Academic Information System

This is an implementation of an Academic Information System in C++. It provides functionalities to manage courses and students within an academic institution.

The implementation consists of the following structures and their associated functions:

1. `Course` Structure:
   - Members: `ID`, `CourseName`, `teacher`, `fee`, `creditHours`
   - Function: `PrintAll` (prints course details)

2. `CourseList` Structure:
   - Members: `courses` (array of `Course` objects)
   - Functions:
     - `PrintAll` (prints details of all courses)
     - `AddCourse` (adds a new course to the array)
     - `SortCoursesAscending` (sorts courses in ascending order based on ID)
     - `SortCoursesDescending` (sorts courses in descending order based on ID)
     - `DeleteAll` (removes all courses from the array)

3. `Student` Structure:
   - Members: `ID`, `StdName`, `RollNo`
   - Function: `PrintAll` (prints student details)

4. `StudentList` Structure:
   - Members: `std` (array of `Student` objects)
   - Functions:
     - `PrintAll` (prints details of all students)
     - `AddStudent` (adds a new student to the array)
     - `DeleteStudent` (removes a student from the array based on ID)

## Program Flow

The program follows a menu-driven approach, where the user is presented with a main menu and can choose various options to perform actions. The available menu options are:

1. Add New Student
2. Delete Existing Student
3. Show all Students
4. Add New Course
5. Delete Existing Course
6. Show particular Course
7. Show all Courses
8. Sort Courses in Ascending order
9. Sort Courses in Descending order
10. Exit

Each option corresponds to a specific action, such as adding a student, deleting a course, or displaying all students. Exception handling is implemented to handle errors gracefully.

## How to Use

1. Clone the repository to your local machine.
2. Compile the code using a C++ compiler (e.g., g++).
3. Run the executable file generated.
4. Follow the on-screen menu prompts to interact with the program.
5. View the outputs and results of the chosen actions.

## Note

- The code is implemented in C++ and may require a C++ compiler to build and run.
- Make sure to provide valid input when prompted to avoid unexpected behavior.
- If you encounter any issues or have any questions, feel free to contact.
