/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <iomanip>

using namespace std;

double calculateCharges(double a);

int main()
{
    double sum1=0.0,sum2=0.0;
    double arr[3];

    for(int i=0;i<=2;i++)
    {
        cin>>arr[i];
    }
    cout<<"Cars\t"<<"Hours\t"<<"Charge\t"<<endl;
    for(int i=1;i<=3;i++)
    {
        cout<<i<<"\t";
        cout<<fixed<<setprecision(1)<<arr[i-1]<<"\t";
        sum1+=arr[i-1];
        cout<<fixed<<setprecision(2)<<calculateCharges(arr[i-1])<<"\t";
        sum2+=calculateCharges(arr[i-1]);
        cout<<endl;
    }
    cout<<"TOTAL\t"<<fixed<<setprecision(1)<<sum1<<"\t"
        <<fixed<<setprecision(2)<<sum2<<"\t"<<endl;

    return 0;
}

double calculateCharges(double a)
{
    if(a<=3) return 2.00;
    else if(a>=19) return 10.00;
    else
    {
        return 2.00+(a-3)*0.5;
    }
}
