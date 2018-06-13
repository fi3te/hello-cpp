#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
    private:
        const std::string description;
    public:
        Animal(std::string description);
        virtual ~Animal();

        virtual void makeNoise() = 0;
        std::string getDescription();
};

#endif // ANIMAL_H
