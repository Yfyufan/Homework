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
    //(1)
    unsigned int sum=0;
    for(unsigned int count=1;count<=99;count++)
    {
        if(count%2!=0)
            sum+=count;
    }
    cout<<"1~99奇数之和为："<<sum<<endl;

    //(2)
    cout<<fixed<<left
    <<setprecision(1)<<setw(15)<<333.546372
    <<setprecision(2)<<setw(15)<<333.546372
    <<setprecision(3)<<setw(15)<<333.546372
    <<endl;

    //(3)
    cout<<fixed<<setprecision(2)<<setw(10)<<pow(2.5,3)<<endl;

    //(4)
    unsigned int x=1;
    while(x<=20)
    {
        cout<<x;
        if(x%5!=0)cout<<"\t";
        else cout<<"\n";
        x++;
    }

    //(5)
    for(x=1;x<=20;x++)
    {
        cout<<x;
        if(x%5!=0)cout<<"\t";
        else cout<<"\n";
    }


    return 0;
}
