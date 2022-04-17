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

bool iseven(int n)
{
    if(0==n%2)
        return true;
    else return false;
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<iseven(n)<<endl;
    }
    return 0;
}
