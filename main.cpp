#include <iostream>
#include "rocket/rocket.hpp"

int main(int argc, char const * argv[]) {
    std::cout << "Starting Stellar Program" << std::endl;

    Rocket rocket;
    rocket.launch();
    rocket.cruise();

    return 0;
}
