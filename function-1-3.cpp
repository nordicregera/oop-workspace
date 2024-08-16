#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
  
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;


    newPersonList.people = new Person[pl.numPeople];


    for (int i = 0; i < pl.numPeople; ++i) {
        newPersonList.people[i] = pl.people[i];
    }


    return newPersonList;
}
