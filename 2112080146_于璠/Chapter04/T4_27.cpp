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
    int a,b,i=2;
    cin>>a;
    b=a%10;
    while(a)
    {
        a/=10;
        b+=(a%10)*i;
        i*=2;
    }
    cout<<b;
    return 0;
}
