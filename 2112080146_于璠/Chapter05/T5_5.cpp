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
    int a,b,sum=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b;
        sum+=b;
    }
    cout<<sum;
    return 0;
}
