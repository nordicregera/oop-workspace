#include "Person.h"
#include <iostream>

// 声明 shallowCopyPersonList 函数
PersonList shallowCopyPersonList(PersonList pl);

// 用于创建测试 PersonList 的函数
PersonList createTestPersonList(int n) {
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];
    for (int i = 0; i < n; ++i) {
        list.people[i].name = "Person " + std::to_string(i + 1);
        list.people[i].age = i + 20;
    }
    return list;
}

int main() {
    int n = 3; 
    PersonList originalList = createTestPersonList(n);

  
    PersonList copiedList = shallowCopyPersonList(originalList);


    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " 
                  << originalList.people[i].name << ", " 
                  << originalList.people[i].age << " years old" << std::endl;
    }

    std::cout << "\nCopied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": " 
                  << copiedList.people[i].name << ", " 
                  << copiedList.people[i].age << " years old" << std::endl;
    }


    delete[] originalList.people;

    return 0;
}
