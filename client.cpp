#include <cstdlib>
#include <iostream>
#include "client.h"

bool Client::requestMainPage(){
    std::cout << system("open http://localhost:3000/");
}
