#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    public:
    Character();
    Character(const std::string &name);
    Character(const Character &src);
    Character &operator= (const Character &rhs);
    ~Character();

    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);

    int getAP() const;
    AWeapon *getWeapon() const;
    const std::string getName() const;

    private:
    int _ap;
    AWeapon *_weapon;
    std::string _name;
};

std::ostream &operator<< (std::ostream &o, const Character &rhs);

#endif