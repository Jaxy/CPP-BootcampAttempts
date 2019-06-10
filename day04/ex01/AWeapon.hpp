#ifndef A_WEAPON_HPP_
# define A_WEAPON_HPP_

# include <iostream>
# include <string>

class AWeapon {
    protected:
    int _damage;
    int _apcost;
    std::string _name;

    public:
    AWeapon();
    AWeapon(const std::string &name, int apcost, int damage);
    AWeapon(const AWeapon &src);
    AWeapon &operator= (const AWeapon &rhs);
    ~AWeapon();

    virtual void attack() const = 0;

    int getAPCost() const;
    int getDamage() const;
    const std::string getName() const;
};

#endif