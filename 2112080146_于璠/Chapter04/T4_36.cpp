/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,t;
    cin>>a>>b>>c>>d;
    t=a;a=c;c=t;
    t=b;b=d;d=t;
    if(a==8)a=1;
    else
    {
    if(a==9)a=2;
    else a=a+3;
    }

    if(b==8)b=1;
    else
    {
    if(b==9)b=2;
    else b=b+3;
    }

    if(c==8)c=1;
    else
    {
    if(c==9)c=2;
    else c=c+3;
    }

    if(d==8)d=1;
    else
    {
    if(d==9)d=2;
    else d=d+3;
    }

    cout<<a<<b<<c<<d;


    return 0;
}
