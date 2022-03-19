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
    double a,b,suma,sumb;
    while (1)
    {
        cout<<"Enter miles driven(-1 to quit): ";
        cin>>a;
        if(a==-1)break;
        cout<<"Enter gallons used: ";
        cin>>b;
        cout<<"MPG this trip : "<<a/b<<endl;
        suma+=a;
        sumb+=b;
        cout<<"Total MPG: "<<suma/sumb<<endl;
        cout<<endl;
     }
    return 0;
}
