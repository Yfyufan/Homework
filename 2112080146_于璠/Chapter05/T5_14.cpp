/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    double mon,sum=0;
    for(int i=1; i<=5;i++)
    {
        cin>>a;
        switch(a)
        {
        case 1:mon=2.98;break;
        case 2:mon=4.50;break;
        case 3:mon=9.98;break;
        case 4:mon=4.49;break;
        case 5:mon=6.87;break;
        default:cout<<"ÄúµÄÊäÈë´íÎó£¬ÇëÊäÈë1~5²úÆ·±àºÅ";break;
        }
        cin>>b;
        sum=sum+mon*b;
    }
    cout<<sum;
    return 0;
}
