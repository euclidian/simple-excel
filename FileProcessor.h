#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "Excel.h"
using namespace std;
class FileProcessor
{
public:
    FileProcessor();
    ~FileProcessor();
    void createFile(char *filename);
    bool loadFile(Excel *e, char *filename);
    void writeFile(char *filename, char *text);
    void deleteFile(char *filename);
};

#endif
