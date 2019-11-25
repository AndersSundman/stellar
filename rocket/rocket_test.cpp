#include "rocket/rocket.hpp"
#include <iostream>

int main(int argc, char const * argv[]) {
    Rocket rocket;
    rocket.launch();

    if(rocket.is_launched()) {
        std::cout << "TEST SUCCESS" << std::endl;
        return 0;
    }
    else {
      std::cout << "TEST FAILURE" << std::endl;
      return 1;
    }
}
