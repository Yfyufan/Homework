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

void judgeWanShu(int n)
{
    int sum=0,j=0;
    int a[10000]={0};
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            a[j++]=i;
        }

    }
    if(sum==n)
    {
    cout<<n<<"=";
    for(int i=0;i<=j-2;i++)
    {
        cout<<a[i]<<"+";
    }
    cout<<a[j-1]<<endl;
    }

}

int main()
{

    for(int i=1;i<=1000;i++)
    {
        judgeWanShu(i);
    }

    return 0;
}
