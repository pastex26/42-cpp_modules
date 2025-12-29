#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
    std::string _type;

public:
    Ice();
    Ice(AMateria const& other);
    ~Ice();

    AMateria*   clone() const;
    void        use(ICharacter& target);
};


