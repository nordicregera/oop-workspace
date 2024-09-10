#include "Grade.h"

Grade::Grade(int stud_id, int course_id, const std::string& assignment, int value)
    : student_id(stud_id), course_id(course_id), assignment(assignment), value(value) {}

int Grade::getStudentId() const {
    return student_id;
}

int Grade::getCourseId() const {
    return course_id;
}

int Grade::getValue() const {
    return value;
}
