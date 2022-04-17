/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;
double circleArea(double r)
{
    const double pi=3.1415926;
    return pi*r*r;
}
int main()
{
    double r;
    cin>>r;
    cout<<circleArea(r);
    return 0;
}
