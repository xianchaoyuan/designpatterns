#ifndef INVOKER_H
#define INVOKER_H

#include "command.h"

/**
 * @brief 调用者
 */
class Invoker
{
public:
    explicit Invoker(Command *command);
    virtual ~Invoker();

    void call();

private:
    Command *m_command{};
};

#endif // INVOKER_H
