#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
    std::string _name;
    AMateria* _inventory[4];
    int _n_index;

    public:
    Character();
    Character(const std::string &name);
    Character(const Character &src);
    Character &operator= (const Character &rhs);
    ~Character();

    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    virtual const std::string &getName() const;
};

#endif