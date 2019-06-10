#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) {
    *this = src;
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}


TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." << std::endl;
    return ;
}


TacticalMarine & TacticalMarine::operator=(const TacticalMarine &rhs) {
	(void)rhs;
	return (*this);
}


void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
    return ;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
    return ;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
    return ;
}

ISpaceMarine *TacticalMarine::clone() const {
    return (new TacticalMarine);
}