#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor" << std::endl;
    _brain = new Brain();
    _type = "Dog";
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    std::cout << "Dog copy constructor" << std::endl;
    _brain = new Brain(*other._brain);
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment constructor" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
        _type = other._type;
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woof !" << std::endl;
}

Brain& Dog::getBrain() const
{
    return *_brain;
}
