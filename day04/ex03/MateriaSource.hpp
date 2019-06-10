#ifndef MATERIA_SOURCE_HPP_
# define MATERIA_SOURCE_HPP_

# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
    AMateria            *_inventory[4];
    int                 _n_index;

    public:
    MateriaSource();
    MateriaSource(const MateriaSource &src);
    MateriaSource &operator=(const MateriaSource &rhs);
    ~MateriaSource();

    virtual void learnMateria(AMateria *m);
    virtual AMateria *createMateria(const std::string &type);
};

#endif