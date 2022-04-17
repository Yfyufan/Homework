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

int zhengShu(int a,int b)
{
    return a/b;
}

int yuShu(int a,int b)
{
    return a%b;
}

int main()
{

    int a[5];
    int n,i;
    cin>>n;
    for(i=0;n!=0;i++)
    {
        a[i]=yuShu(n,10);
        n=zhengShu(n,10);
    }

    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
}
