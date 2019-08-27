#ifndef EXCEL_H
#define EXCEL_H
#include <iostream>
#include <string.h>
using namespace std;
class Excel
{
public:
    int x;
    int y;
    Excel(int x,int y);
    ~Excel();
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};
#endif
