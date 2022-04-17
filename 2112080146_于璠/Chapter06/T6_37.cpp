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

int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c=1;
    if(n==1)cout<<b<<endl;
    else if(n==2)cout<<c<<endl;
    else
    {
    for(int i=1;i<=n/3;i++)
    {
        a=b+c;
        b=a+c;
        c=a+b;
    }
    if(n%3==0)cout<<a<<endl;
    if(n%3==1)cout<<b<<endl;
    if(n%3==2)cout<<c<<endl;
    }
    return 0;
}
