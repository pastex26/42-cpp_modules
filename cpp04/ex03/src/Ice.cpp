#include "Ice.hpp"

#include "../include/AMateria.hpp"

Ice::Ice() : AMateria("ice"), _type("ice")
{
}

Ice::Ice(AMateria const& other): AMateria(other)
{
    *this = other;
}

Ice::~Ice()
{
}

AMateria    *Ice::clone() const
{
    return new Ice();
}

void    Ice::use(ICharacter& target)
{
    (void)target;
    std::cout << "* shoots an ice bolt at " << std::endl;
}