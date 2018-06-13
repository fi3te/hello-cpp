#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(): Animal("A dog is a member of the genus Canis.") {
    cout << "It is a dog." << endl;
}

Dog::~Dog() {
    cout << "The dog dies." << endl;
}

void Dog::bark() {
    cout << "Wuff!" << endl;
}

void Dog::makeNoise() {
    this->bark();
}
