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

int power(int a,int b)
{
    if(1==b) return a;
    else
    return a*power(a,b-1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}
