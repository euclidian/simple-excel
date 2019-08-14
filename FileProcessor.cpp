#include <iostream>
#include <fstream>
using namespace std;
class FileProcessor
{
public:
    FileProcessor() {}  //constructor
    ~FileProcessor() {} //destructor

    void createFile(string filename)
    {
        ofstream file(filename.c_str());
    }
    void writeFile(string filename, string text)
    {
        ofstream file;
        file.open(filename.c_str());
        file<<text;
        file.close();
    }
    void deleteFile(string filename)
    {
        remove(filename.c_str());
    }
};