#ifndef I_CHARACTER_HPP_
# define I_CHARACTER_HPP_

# include <string>

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
    virtual ~ICharacter() { return ; }

    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
    virtual const std::string &getName() const = 0;
};

#endif