#include "./FileProcessor.h"
using namespace std;

FileProcessor::FileProcessor() {}  //constructor
FileProcessor::~FileProcessor() {} //destructor

void FileProcessor::createFile(char *filename)
{
    ofstream file(filename);
}
void FileProcessor::writeFile(char *filename, char *text)
{
    ofstream file;
    file.open(filename);
    file << text << endl;
    file.close();
}
void FileProcessor::deleteFile(char *filename)
{
    remove(filename);
}