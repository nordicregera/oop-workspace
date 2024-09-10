#include "Course.h"

Course::Course(int id, const std::string& name) 
    : id(id), name(name) {}

void Course::addPerson(Person* person) {
    persons.push_back(person);
}

int Course::getId() const {
    return id;
}
