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
    //(a)
    cout<<"请输入一个非负整数: ";
    unsigned int n;
    cin>>n;
    if(n==0||n==1)cout<<1;
    else
    {
        int i=1,sum=1;
        while(i<=n)
        {
            sum*=i;
            i++;
        }
        cout<<sum;

    }
    cout<<endl;
    cout<<endl;

    //(b)
    cout<<"请输入想要的精度";
    int i=1;
    cin>>n;
    double e=0,a;
    while(i<=n)
    {
        int j=i-1;
        if(j==0||j==1)a=1;
        else
        {   int b=1;
            while(b<=j)
            {
                a=a*b;
                b++;
            }
        }
        e+=1/a;
        i++;
    }
    cout<<e;
    cout<<endl;
    cout<<endl;


    //(c)
    cout<<"请输入想要的精度";
     i=1;
    cin>>n;
    cout<<"请输入想要估算的e的x次方";
    int x;
    cin>>x;
    e=0;
    while(i<=n)
    {
        //此处算分母
        int j=i-1;
        if(j==0||j==1)a=1;
        else
        {   int b=1;
            while(b<=j)
            {
                a=a*b;
                b++;
            }
        }
        //此处算分子
        int a1=1;
        if(i==1)a1=1;
        else a1*=x;
        e+=a1/a;
        i++;
    }
    cout<<e;



    return 0;
}
