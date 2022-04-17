/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a,double b)
{
    return pow(a*a+b*b,0.5);
}

int main()
{
    double a,b;
    while(1)
    {
        cin>>a>>b;
        cout<<hypotenuse(a,b);
    }
    return 0;
}
