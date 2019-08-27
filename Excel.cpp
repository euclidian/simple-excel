#include "./Excel.h"
using namespace std;
int x;
int y;
Excel::Excel(int x,int y) {
    this->x = x;
    this->y = y;
}  //constructor
Excel::~Excel() {} //destructor
void Excel::setX(int x)
{
    this->x = x;
}
void Excel::setY(int y)
{
    this->y = y;
}
int Excel::getX()
{
    return this->x;
}
int Excel::getY()
{
    return this->y;
}
