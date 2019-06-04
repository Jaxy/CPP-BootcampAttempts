#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
    std::cout << "Melee attack : " << target << std::endl;
}

// void Human::meleeAttack() {
//     std::cout << "Melee attack : default" << std::endl;
// }

void Human::rangedAttack(std::string const & target) {
    std::cout << "Ranged attack : " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "Inimidating shout : " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
    std::string actions[] = { "meleeAttack", "rangedAttack", "intimidatingShout"};
    // Creates an array of pointers of type Human which is called Actions
    // It references meleeAttack, rangedAttack and intimidatingShout member functions
    // Note that all references have parameters (std::string const & target)
    void (Human::*Actions[])(std::string const & target) = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout,
    };
    for (int i = 0; i < (int)(sizeof(actions)/sizeof(std::string)); i++) {
        if (actions[i] == action_name)
        {
            (this->*(Actions[i]))(target);
            break;
        }
    }
}