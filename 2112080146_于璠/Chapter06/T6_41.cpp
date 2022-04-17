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

int gcd(int x,int y)
{
    if(y==0)return x;
    else return gcd(y,x%y);
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
    return 0;
}
