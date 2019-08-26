#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string.h>
using namespace std;
class Command
{
public:
    Command();
    ~Command();
    void list();
    char* execute(char* option);
};
#endif
