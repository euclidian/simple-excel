#include "./FileProcessor.h"
using namespace std;


    FileProcessor::FileProcessor() {}  //constructor
    FileProcessor::~FileProcessor() {} //destructor

    void FileProcessor::createFile(string filename)
    {
        ofstream file(filename.c_str());
    }
    void FileProcessor::writeFile(string filename, string text)
    {
        ofstream file;
        file.open(filename.c_str());
        file<<text;
        file.close();
    }
    void FileProcessor::deleteFile(string filename)
    {
        remove(filename.c_str());
    }