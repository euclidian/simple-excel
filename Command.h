#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string.h>
#include "./FileProcessor.h"
#include "./Excel.h"
using namespace std;
class Command
{
public:
    Command();
    ~Command();
    void list();
    bool execute(char *option);
    bool isFileOpen();

protected:
    bool is_file_open;
    Excel *e;
    FileProcessor *fp;
};
#endif
