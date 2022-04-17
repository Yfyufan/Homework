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

int integerPower(int x,int y)
{
    int sum=1;
    for(int i=1;i<=y;i++)
    {
        sum*=x;
    }
    return sum;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<integerPower(a,b);

    return 0;
}
