//
// Created by Tanya Batsenko on 5/15/18.
//

#include <cstdlib>
#include <iostream>
#include "client.h"

bool Client::requestMainPage(){
    std::cout << system("open http://localhost:3000/");
}
