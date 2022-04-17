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

void judge(int n)
{
    int a=1;
    if(n==1)a=0;
    else if(n==2)a=1;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)a=0;
        }
    }
    if(a==1)cout<<n<<endl;
}

int main()
{
    for(int i=2;i<=10000;i++)
    {
        judge(i);
    }
    return 0;
}
