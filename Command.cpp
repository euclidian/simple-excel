#include "./Command.h"
#include "./FileProcessor.h"
using namespace std;

Command::Command() {}  //constructor
Command::~Command() {} //destructor
void Command::list()
{
    cout << "New File (N)" << endl;
    cout << "Load File (O)" << endl;
    cout << "About (A)" << endl;
    cout << "Exit (E)" << endl
         << endl;
}
char *Command::execute(char *option)
{
    FileProcessor fp;
    if (strcmp("New", option) == 0 || strcmp("N", option) == 0)
    {
        char *filename = new char[10];
        char *x = new char[10];
        char *y = new char[10];
        cin >> filename;
        cin >> x;
        cin >> y;
        char *result = new char[strlen(x) + strlen(y) + 2];
        strcpy(result, "x:");
        strcat(result, x);
        strcat(result, "\n");
        strcat(result, "y:");
        strcat(result, y);
        fp.createFile(filename);
        fp.writeFile(filename, result);
        cout << "Success" << endl;
    }
    else if (strcmp("Load", option) == 0 || strcmp("O", option) == 0)
    {
        cout << "Success" << endl;
    }
    else if (strcmp("About", option) == 0 || strcmp("A", option) == 0)
    {
        cout << "Success" << endl;
    }
    else if (strcmp("Exit", option) == 0 || strcmp("E", option) == 0)
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Command Not Found : " << option << endl;
    }
    return option;
}
