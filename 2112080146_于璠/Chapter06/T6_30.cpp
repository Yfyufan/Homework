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

int niXu(int n)
{
    int a=0;
    while(n)
    {
     a=10*a+n%10;
     n=n/10;
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    cout<<niXu(n);
    return 0;
}
