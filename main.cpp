#include <iostream>
#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"
#include "Grade.h"

int main() {
    University uni("My University", "My Location");

    uni.addCourse(1, "Introduction to Programming");

    Student* student = new Student("John Doe", 12345);
    Course* course = uni.getCourseById(1);
    if (course) {
        course->addPerson(student);
    } else {
        std::cout << "Course not found!" << std::endl;
        return 1;
    }

    Gradebook gradebook;
    gradebook.addGrade(student->getId(), course->getId(), "Assignment 1", 90);

    return 0;
}
