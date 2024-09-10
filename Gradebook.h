#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <vector>
#include "Grade.h"

class Gradebook {
private:
    std::vector<Grade> grades;
public:
    void addGrade(int stud_id, int course_id, const std::string& assignment, int value);  // 添加成绩
};

#endif
