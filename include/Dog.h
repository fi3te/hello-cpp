#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
    public:
        Dog();
        virtual ~Dog();

        void bark();
        void makeNoise();
};

#endif // DOG_H
