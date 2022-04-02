/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int x=5,y=6;
    if(!(x<5)&&!(y>=7))cout<<x+y<<endl;
    //等价于
    if(!(x<5||y>=7))cout<<x+y<<endl;

    int a=2,b=3,g=5;
    if(!(a==b)&&!(g!=5)) cout<<a+b+g<<endl;
    //等价于
    if(!(a==b||g!=5)) cout<<a+b+g<<endl;

    x=8;
    y=4;
    if(!((x<=8)&&(y>4))) cout<<x+y<<endl;
    //等价于
    if((!x<=8)||!(y>4)) cout<<x+y<<endl;

    int i=4,j=7;
    if(!((i>4)||(j<=6))) cout<<i+j<<endl;
    if(!(i>4)&&!(j<=6))cout<<i+j<<endl;
    return 0;
}
