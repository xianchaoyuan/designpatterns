#include "concretecommand.h"
#include "receiver.h"

ConcreteCommand::ConcreteCommand(Receiver *receive)
    : m_receive(receive)
{}

ConcreteCommand::~ConcreteCommand()
{}

void ConcreteCommand::execute()
{
    m_receive->action();
}
