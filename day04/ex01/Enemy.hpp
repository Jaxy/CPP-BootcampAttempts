#ifndef ENEMY_HPP_
# define ENEMY_HPP_

# include <iostream>

class Enemy
{
    protected:
    int _hp;
    std::string _type;

    public:
    Enemy();
    Enemy(int hp, const std::string &type);
    Enemy(const Enemy &src);
    Enemy &operator= (const Enemy &rhs);
    virtual ~Enemy();

    int getHP() const;
    const std::string getType() const;

    virtual void takeDamage(int damage);
};

#endif