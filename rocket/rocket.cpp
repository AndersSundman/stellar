#include "rocket.hpp"
#include <iostream>

void Rocket::launch() { std::cout << "ROCKET LAUNCHING!" << std::endl; }
bool Rocket::is_launched() const { return false; }
