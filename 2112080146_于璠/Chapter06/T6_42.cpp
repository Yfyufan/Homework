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

double distance(double x1,double y1,double x2,double y2)
{
    return pow((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),0.5);
}

int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<distance(x1,y1,x2,y2);
    return 0;
}
