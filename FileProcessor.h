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

    void createFile(string filename);
    void writeFile(string filename, string text);
    void deleteFile(string filename);
};
#endif
