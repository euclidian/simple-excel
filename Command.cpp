#include "./Command.h"
using namespace std;
bool is_file_open;
Excel *e;
FileProcessor *fp;
Command::Command()
{
    e = new Excel;
} //constructor
Command::~Command() {} //destructor
void Command::list()
{
    cout << "New File (N)" << endl;
    cout << "Load File (O)" << endl;
    cout << "About (A)" << endl;
    cout << "Exit (E)" << endl
         << endl;
}
bool Command::execute(char *option)
{

    if (strcmp("New", option) == 0 || strcmp("N", option) == 0)
    {
        char *filename = new char[10];
        int x;
        int y;
        cin >> filename;
        cin >> x;
        cin >> y;
        char *result = new char[100];
        strcpy(result, "x:");
        char buffer[16];
        snprintf(buffer, sizeof(buffer), "%d", x);
        strcat(result, buffer);
        strcat(result, "\n");
        strcat(result, "y:");
        snprintf(buffer, sizeof(buffer), "%d", y);
        strcat(result, buffer);
        fp->createFile(filename);
        fp->writeFile(filename, result);
        delete filename;
        delete result;
        return true;
    }
    else if (strcmp("Load", option) == 0 || strcmp("O", option) == 0)
    {
        char *filename = new char[10];
        cin >> filename;
        this->is_file_open = fp->loadFile(e, filename);
        delete filename;
        return true;
    }
    else if (strcmp("About", option) == 0 || strcmp("A", option) == 0)
    {
        if (this->is_file_open)
        {
            cout << "x: " << e->getX() << endl;
            cout << "y: " << e->getY() << endl;
        }
        else
        {
            cout << "File Belum Dibuka" << endl;
        }
        return true;
    }
    else if (strcmp("Exit", option) == 0 || strcmp("E", option) == 0)
    {
        return false;
    }
    else
    {
        cout << "Command tidak ditemukan: " << option << endl;
        return true;
    }
}
bool Command::isFileOpen()
{
    return this->is_file_open;
}