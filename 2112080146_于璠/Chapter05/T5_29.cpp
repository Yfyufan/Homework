/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double rate,amount;
    cout<<setw(4)<<"Äê·Ý"
        <<setw(20)<<"5%"
        <<setw(20)<<"6%"
        <<setw(20)<<"7%"
        <<setw(20)<<"9%"
        <<setw(20)<<"10%";
        cout<<endl;
    for(int i=1;i<=2022-1626;i++)
    {
        cout<<setw(4)<<i;
        for(int j=1;j<=5;j++)
        {
            rate=1.0*j/100;
            amount=24*pow(1+rate,i);
            cout<<setw(20)<<amount;
        }
        cout<<endl;
    }


    return 0;
}
