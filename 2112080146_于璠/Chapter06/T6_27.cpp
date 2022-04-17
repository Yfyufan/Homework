/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

double threeMin(double a,double b,double c)
{
    double t;
    if(a>b){t=a,a=b,b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b,b=c,c=t;}

    return a;
}

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<threeMin(a,b,c);
    return 0;
}
