#include "Person.h"
#include <iostream>
Person* createPersonArray(int n);

int main() {
    int n = 5;
    Person* people = createPersonArray(n);

    for (int i = 0; i < n; i++)  {
        std::cout<< "Person"<< i+1<<":"
                 << people[i].name <<","
                 << people[i].age <<"years old"<< std::endl;
    }
    delete[] people;
    return 0;
}