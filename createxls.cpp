#include <iostream>
#include <cstdlib>
#include "./Command.h"
#include "./FileProcessor.h"

using namespace std;
int main()
{
    Command c;
    FileProcessor fp;
    string option;
    system("clear");
    c.list();
    do
    {
        cout << ":";
        getline(cin, option);
        cout << c.execute(option) << endl;
    } while (option != "E" && option != "Exit");
    return 0;
}