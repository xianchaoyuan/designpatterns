#include "receiver.h"

#include <iostream>

Receiver::Receiver()
{}

Receiver::~Receiver()
{}

void Receiver::action()
{
    std::cout << "receiver action" << std::endl;
}
