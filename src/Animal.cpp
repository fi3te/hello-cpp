#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

Animal::Animal(std::string description): description(description) {
    cout << "An animal was born!" << endl;
}

Animal::~Animal() {
    cout << "An animal has died!" << endl;
}

std::string Animal::getDescription() {
    return description;
}
