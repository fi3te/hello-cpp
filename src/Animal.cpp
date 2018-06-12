#include "Animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {
    cout << "An animal was born!" << endl;
}

Animal::~Animal() {
    cout << "An animal has died!" << endl;
}
