#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(string description): description(description) {
    cout << "An animal was born!" << endl;
}

Animal::~Animal() {
    cout << "An animal has died!" << endl;
}

string Animal::getDescription() const {
    return description;
}
