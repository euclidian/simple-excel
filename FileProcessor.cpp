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
bool FileProcessor::loadFile(Excel *e, char *filename)
{
    ifstream infile(filename);
    char *line = new char[10];
    int x, y;
    if (infile.is_open())
    {
        while (infile.good())
        {
            infile.getline(line, 10);
            bool modenumber = false;
            char *tmp = new char[10];
            for (int i = 0; i < strlen(line); i++)
            {
                if (line[i] == ':')
                {
                    modenumber = true;
                    continue;
                }
                if (modenumber)
                {
                    tmp[strlen(tmp)] = line[i];
                }
            }
            tmp[strlen(tmp)] = '\0';
            if (x == 0)
            {
                x = atoi(tmp);
            }
            else
            {
                y = atoi(tmp);
            }

            delete tmp;
        }

        e->setX(x);
        e->setY(y);
        x = 0;
        y = 0;
        return true;
    }
    else
    {
        cout << "file tidak ada" << endl;
        e->setX(0);
        e->setY(0);
        x = 0;
        y = 0;
        return false;
    }
}
void FileProcessor::deleteFile(char *filename)
{
    remove(filename);
}