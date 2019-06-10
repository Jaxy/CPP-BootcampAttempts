#ifndef I_MATERIAL_SOURCE_HPP_
# define I_MATERIAL_SOURCE_HPP_

# include "AMateria.hpp"

class IMateriaSource
{
    public:
    virtual ~IMateriaSource(void) { return ; }

    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria *createMateria(std::string const & type) = 0;
};

#endif