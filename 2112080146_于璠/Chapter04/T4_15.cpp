/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b;
    while(1)
    {
        cout<<"Enter sales in dollars(-1 to end): ";cin>>a;
        if(a==-1)break;
        b=200.00+a*0.09;
        cout<<setprecision(2)<<fixed;
        cout<<"Salary is: $"<<b<<endl;
        cout<<endl;
    }
    return 0;
}
