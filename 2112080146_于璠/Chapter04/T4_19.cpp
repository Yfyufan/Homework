/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int a,max1,max2,t;
    for(int i=1;i<=10;i++)
    {
        cin>>a;
        if(i==1)max1=a;
        if(i==2)max2=a;
        if(max2>max1){t=max2;max2=max1;max1=t;}
        if(i>=3)
        {
            if(a>max1){max2=max1;max1=a;}
            if(a<max1&&a>max2){max2=a;}
        }
    }
    cout<<"最大值是"<<max1<<endl;
    cout<<"次大值是"<<max2<<endl;
    return 0;
}
