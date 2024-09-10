#include "University.h"

University::University(const std::string& name, const std::string& location) 
    : name(name), location(location) {}

void University::addCourse(int id, const std::string& name) {
    Course* newCourse = new Course(id, name);
    courses.push_back(newCourse);
}

Course* University::getCourseById(int id) {
    for (auto course : courses) {
        if (course->getId() == id) {
            return course;
        }
    }
    return nullptr;
}
