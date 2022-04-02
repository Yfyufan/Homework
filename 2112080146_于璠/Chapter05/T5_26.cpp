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
    for(unsigned int i=1;i<=5;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=1;k<=4;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
