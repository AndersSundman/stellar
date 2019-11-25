#include "rocket.hpp"
#include <iostream>

void Rocket::launch() {
    std::cout << "ROCKET LAUNCHING!" << std::endl;
    this->_has_launched = true;
}

bool Rocket::is_launched() const { return this->_has_launched; }
