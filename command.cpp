#include <iostream>
#include <string.h>
using namespace std;
class command
{
public:
    command() {}  //constructor
    ~command() {} //destructor
    void list()
    {
        cout << "New File (N)" << endl;
        cout << "Load File (O)" << endl;
        cout << "About (A)" << endl;
        cout << "Exit (E)" << endl
             << endl;
    }
    string execute(string option)
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
};