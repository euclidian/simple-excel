#include <iostream>
#include <string.h>
#include <cstdlib>
#include "./command.cpp"

using namespace std;
int main()
{
    command *c;
    string option;
    system("clear");
    c->list();
    cout << ":";
    getline(cin, option);
    cout << c->execute(option) << endl;
    return 0;
}