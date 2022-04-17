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

int roundToInteger(double n)
{
    return floor(n+0.5);
}
double roundToTenths(double n)
{
    return floor(n*10+0.5)/10;
}
double roundToHundreds(double n)
{
    return floor(n*100+0.5)/100;
}
double roundToThousands(double n)
{
    return floor(n*1000+0.5)/1000;
}
int main()
{
    double x;
    cin>>x;
    cout<<x<<"\t"
        <<roundToInteger(x)<<"\t"
        <<roundToTenths(x)<<"\t"
        <<roundToHundreds(x)<<"\t"
        <<roundToThousands(x)<<"\t"<<endl;
    return 0;
}
