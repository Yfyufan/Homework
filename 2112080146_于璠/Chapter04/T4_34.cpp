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
    cout<<"������һ���Ǹ�����: ";
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
    cout<<"��������Ҫ�ľ���";
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
    cout<<"��������Ҫ�ľ���";
     i=1;
    cin>>n;
    cout<<"��������Ҫ�����e��x�η�";
    int x;
    cin>>x;
    e=0;
    while(i<=n)
    {
        //�˴����ĸ
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
        //�˴������
        int a1=1;
        if(i==1)a1=1;
        else a1*=x;
        e+=a1/a;
        i++;
    }
    cout<<e;



    return 0;
}
