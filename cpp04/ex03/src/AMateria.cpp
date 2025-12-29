#include "AMateria.hpp"
#include "../include/AMateria.hpp"

AMateria::~AMateria() {}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::AMateria(AMateria const& other)
{
    _type = other._type;
}

std::string const AMateria::getType() const { return _type; }
