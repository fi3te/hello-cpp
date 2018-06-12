#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
    Dog* d = new Dog;
    d->bark();
    delete d;

    cin.get();
}
