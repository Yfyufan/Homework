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
unsigned long jieCheng(unsigned long n);
int main()
{
    unsigned long n;
    cin>>n;
    cout<<jieCheng(n)<<endl;

    return 0;
}

unsigned long jieCheng(unsigned long n)
{

    if(0==n||1==n) return 1;
    else
    {
        return n*jieCheng(n-1);
        cout<<n<<"*jieCheng("<<n-1<<")"<<endl;
    }


}
