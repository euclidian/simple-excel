#include <iostream>
#include <cstdlib>
#include "./Command.h"

using namespace std;
int main()
{
    Command c;
    char *option = new char[10];
    system("clear");

    c.list();
    do
    {
        cout << ":";
        cin >> option;
        cout << c.execute(option) << endl;
    } while (option != "E" && option != "Exit");
    return 0;
}