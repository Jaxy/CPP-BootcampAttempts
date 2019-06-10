#include "Enemy.hpp"

Enemy::Enemy() {
    return ;
}

Enemy::Enemy(const Enemy &src) {
    *this = src;
    return ;
}

Enemy::Enemy(int hp, const std::string &type) {
    this->_hp = hp;
    this->_type = type;
    return ;
}

Enemy::~Enemy() {
    return ;
}

Enemy & Enemy::operator= (const Enemy &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

int Enemy::getHP() const {
    return (this->_hp);
}

const std::string Enemy::getType() const {
    return (this->_type);
}

void Enemy::takeDamage(int damage) {
    (this->_hp - damage <= 0 && damage > 0) ? this->_hp = 0 : this->_hp -= damage;
    return ;
}