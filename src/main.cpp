#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Animal* d = new Dog;
    d->makeNoise();
    delete d;

    cin.get();
}
