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
    int a,b,c;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b;
        if(1==i)c=b;
        else c=min(b,c);

    }
    cout<<"最小值为："<<c;
    return 0;
}
