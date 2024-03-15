#ifndef COMMAND_H
#define COMMAND_H

/**
 * @brief 命令
 */
class Command
{
public:
    Command();
    virtual ~Command();

    virtual void execute() = 0;
};

#endif // COMMAND_H
