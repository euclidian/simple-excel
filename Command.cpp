#include "./Command.h"
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
string Command::execute(string option)
{
    if (option == "New File" || option == "N")
    {
        return "Success";
    }
    else if (option == "Load File" || option == "O")
    {
        return "Success";
    }
    else if (option == "About" || option == "A")
    {
        return "Success";
    }
    else if (option == "Exit" || option == "E")
    {
        return "Success";
    }
    return "Command Not Found";
}
