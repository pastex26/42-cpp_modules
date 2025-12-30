#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Animal")
{
    std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "Animal copy constructor" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal assignment constructor" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor" << std::endl;
}

std::string AAnimal::getType() const
{
    return _type;
}
