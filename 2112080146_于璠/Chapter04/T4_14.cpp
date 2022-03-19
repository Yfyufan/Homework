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
    double a,b,c,d,e;
    while(1)
    {
        cout<<"Enter accout number(or -1 to quit): ";cin>>a;
        if(a==-1)break;
        cout<<"Enter beginning balance: ";cin>>b;
        cout<<"Enter total charges: ";cin>>c;
        cout<<"Enter total credits£º";cin>>d;
        cout<<"Enter credit limit: ";cin>>e;
        cout<<"New balance is "<<b+c-d<<endl;
        if(b+c-d>e)
        {
            cout<<"Acount:      "<<a<<endl;
            cout<<"Credit limit:"<<e<<endl;
            cout<<"Balance:     "<<b+c-d<<endl;
            cout<<"Credit limit Exceeded."<<endl;
        }

    }
        return 0;
}
