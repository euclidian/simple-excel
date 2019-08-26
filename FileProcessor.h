#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <iostream>
#include <fstream>
using namespace std;
class FileProcessor
{
public:
    FileProcessor();
    ~FileProcessor();

    void createFile(char* filename);
    void writeFile(char* filename, char* text);
    void deleteFile(char* filename);
};
#endif
