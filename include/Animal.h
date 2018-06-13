#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        const string description;
    public:
        Animal(string description);
        virtual ~Animal();

        virtual void makeNoise() = 0;
        string getDescription() const;
};

#endif // ANIMAL_H
