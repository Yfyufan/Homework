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
    //(1)

    //(a)
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    cout<<endl;

    //(b)
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=11-i;j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    cout<<endl;


    //(c)
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<' ';
        }
        for(int k=1;k<=11-i;k++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    cout<<endl;


    //(d)
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10-i;j++)
        {
            cout<<' ';
        }
        for(int k=1;k<=i;k++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
