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
    int a,b,c,t;
    cin>>a>>b>>c;
    if(a>b){t=a;a=b;b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;}
    if(a*a+b*b==c*c)cout<<"可以表示一个直角三角形的三条边";
    else cout<<"不可以表示一个直角三角形的三条边";

    return 0;
}
