/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int amount,pinciple=100000;
    double rate=0.05;
    cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
    for(unsigned int i;i<=10;i++)
    {
        amount=pinciple*pow(1+rate,i);
        cout<<i<<setw(21)<<amount/100<<"."<<(amount/10)%10<<amount%10<<endl;

    }
    return 0;
}
