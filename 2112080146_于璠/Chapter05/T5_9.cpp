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
    int sum=1;
    for(int i=1;i<=15;i++)
    {
        if(i%2!=0)sum*=i;
    }
    cout<<"³Ë»ýÎª£º"<<sum;
    return 0;
}
