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
    for(int i=1;i<=8;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=8;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        else
        {
            cout<<" ";
            for(int q=1;q<=8;q++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    return 0;
}
