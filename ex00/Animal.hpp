

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <ostream>
#include <string>


class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal& other);
        ~Animal();

        Animal& operator=(const Animal& other);


};


#endif