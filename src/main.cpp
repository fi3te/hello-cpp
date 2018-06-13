#include <iostream>
#include "Dog.h"

using namespace std;

ostream& operator << (ostream& os, const Animal& animal) {
    return os << animal.getDescription();
}

int main() {
    Animal* a = new Dog;
    cout << *a << endl;
    a->makeNoise();
    delete a;

    cin.get();
}
