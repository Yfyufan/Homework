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
    int a,sum=0,i=1;
    for(;;)
    {
        cin>>a;
        if(9999==a)break;
        sum+=a;
        i++;

    }
    double ave=sum*1.0/i;
    cout<<"平均值为: "<<ave;
    return 0;
}
