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
    double amount;
    double principle=1000.0;
    double rate;

    for(unsigned int year=1;year<=10;year++)
    {
        cout<<year;
        for(int i=5;i<=10;i++)
        {
            rate=i*1.0/100;
            amount=principle*pow(1+rate,year);
            cout<<fixed<<setprecision(2)<<setw(15)<<amount;
        }
        cout<<endl;
    }
    return 0;
}
