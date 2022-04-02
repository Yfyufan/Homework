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
    int a;
    double p=0;
    cout<<setw(6)<<left<<"前n项"
        <<setw(10)<<left<<"pi的近似值"<<endl;
    for(int i=1;i<=1000;i++)
    {
        cout<<setw(6)<<left<<i;
        a=pow(-1,i-1)*(2*i-1);
        p=p+4*1.0/a;
        cout<<setw(10)<<left<<p<<endl;

    }


    return 0;
}
