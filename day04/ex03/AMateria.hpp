#ifndef A_MATERIA_HPP_
#define A_MATERIA_HPP_

// # include <string>
# include <cstdlib>

# include "ICharacter.hpp"

class AMateria
{
    protected:
    unsigned int xp_;
    std::string _type;

    public:
    AMateria();
    AMateria(const std::string &type);
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);
    virtual ~AMateria();

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;

    unsigned int getXP() const;
    const std::string &getType() const;
};

#endif