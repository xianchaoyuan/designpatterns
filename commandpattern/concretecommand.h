#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include "command.h"
#include "receiver.h"

/**
 * @brief 具体命令
 */
class ConcreteCommand : public Command
{
public:
    explicit ConcreteCommand(Receiver *receive);
    virtual ~ConcreteCommand();

    void execute() override;

private:
    Receiver *m_receive{};
};

#endif // CONCRETECOMMAND_H
