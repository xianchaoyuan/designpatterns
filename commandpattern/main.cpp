#include <iostream>

#include "invoker.h"
#include "receiver.h"
#include "concretecommand.h"

using namespace std;

int main()
{
    Receiver *receiver = new Receiver();
    ConcreteCommand *command = new ConcreteCommand(receiver);
    Invoker *invoker = new Invoker(command);
    invoker->call();

    delete receiver;
    delete command;
    delete invoker;

    return 0;
}
