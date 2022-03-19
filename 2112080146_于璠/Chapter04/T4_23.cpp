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
{   //(a)
    int x=9,y=11;
    if(x<10)
    if(y>10)
    cout<<"*****"<<endl;
    else
    cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<endl;
    x=11;y=9;
    if(x<10)
    if(y>10)
    cout<<"*****"<<endl;
    else
    cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<endl;
    //(b)
    x=9,y=11;
    if(x<10)
    {
        if(y>10)
        cout<<"*****"<<endl;
    }
    else
    {
        cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;
    }
    cout<<endl;
     x=11,y=9;
    if(x<10)
    {
        if(y>10)
        cout<<"*****"<<endl;
    }
    else
    {
        cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;
    }



    return 0;
}
