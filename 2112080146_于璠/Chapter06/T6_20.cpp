/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

bool multiple(int a,int b)
{
    if(b%a==0)
        return true;
    else return false;
}

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiple(a,b);
    return 0;
}
