#include "invoker.h"

Invoker::Invoker(Command *command)
    : m_command(command)
{}

Invoker::~Invoker()
{}

void Invoker::call()
{
    m_command->execute();
}
