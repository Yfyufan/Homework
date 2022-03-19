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
        cout<<"Enter hours worked(-1 to end): ";cin>>a;
        if(a==-1)break;
        cout<<"Enter hourly rate of the employee($00.00): ";cin>>b;
        if(a<=40)
           {
            cout<<setprecision(2)<<fixed<<"Salary is $"<<a*b<<endl;
            cout<<endl;
            }
        if(a>40)
           {
            cout<<setprecision(2)<<fixed<<"Salary is $"<<40*b+(a-40)*1.5*b<<endl;
            cout<<endl;
            }

    }
    return 0;
}
