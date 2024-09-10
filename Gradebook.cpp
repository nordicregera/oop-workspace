#include "Gradebook.h"

void Gradebook::addGrade(int stud_id, int course_id, const std::string& assignment, int value) {
    grades.push_back(Grade(stud_id, course_id, assignment, value));
}
