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
int qualityPoints(int n)
{
    if(90<=n&&n<=100)return 4;
    if(80<=n&&n<=89)return 3;
    if(70<=n&&n<=79)return 2;
    if(60<=n&&n<=69)return 1;
    if(n<=59)return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<qualityPoints(n);
    return 0;
}
