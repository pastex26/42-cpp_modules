#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    cleanMateria();
}

void MateriaSource::learnMateria(AMateria*)
{

}


void MateriaSource::cleanMateria()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] != NULL)
            delete _materia[i];
    }
}
