#include <iostream>
#include <fstream>
using namespace std;
class FileProcessor
{
public:
    FileProcessor() {}  //constructor
    ~FileProcessor() {} //destructor
    string filename;
    ofstream file;
    void createFile(string filename)
    {
        this->filename = filename;
        this->file.open(this->filename.c_str());
    }
    void writeFile(string text)
    {
        this->file << text;
    }
    void deleteFile(string filename)
    {
        remove(filename.c_str());
    }
};