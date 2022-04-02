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
    for(int i=1; i<=9; i++)
    {
        if(i<=5)
        {
            for(int j=5-i; j>=0; j--)
            {
                cout<<" ";
            }
            for(int k=1; k<=2*i-1; k++)
            {
                cout<<"*";
            }
            for(int j=5-i; j>=0; j--)
            {
                cout<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=i-5; j>=0; j--)
            {
                cout<<" ";
            }
            for(int k=1;k<=19-2*i;k++)
            {
                cout<<"*";
            }
            for(int j=i-5; j>=0; j--)
            {
                cout<<" ";
            }
             cout<<endl;
        }
    }
    return 0;
}
