#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
    abscisse=ordinate=0; //ctor
}

Point::~Point()
{
    //dtor
}
Point::Point(int a, int b)
{
    abscisse=a;
    ordinate=b;
}
void Point::Display()
{
    cout << "\n(" << abscisse << "," << ordinate << ")";
}
Point Point::Move(int d)
{
    return(Point(abscisse+d,ordinate+d));
}
int main()
{
    int x,y,d;
    cout << "\n Enter the Abscissa:";cin >>x;
    cout << "\n Enter the Ordinate:";cin >>y;
    Point p = Point(x,y);
    p.Display();
    cout << "\nEnter The Distance to Move:";
    cin >> d;
    Point q = p.Move(d);
    q.Display();

    return 0;
}
