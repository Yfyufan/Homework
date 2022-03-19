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
    int a;cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(i==1||i==a)
        {
            for(int j=1;j<=a;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            for(int q=1;q<=a;q++)
            {
                if(q==1||q==a)cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
