#ifndef I_SPACE_MARINE_HPP_
# define I_SPACE_MARINE_HPP_

class ISpaceMarine
{
    public:
    virtual ~ISpaceMarine(void) { return ; }

    virtual void battleCry(void) const = 0;
    virtual void meleeAttack(void) const = 0;
    virtual void rangedAttack(void) const = 0;

    virtual ISpaceMarine *clone(void) const = 0;
};

#endif