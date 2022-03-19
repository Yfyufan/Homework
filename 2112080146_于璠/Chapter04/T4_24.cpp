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
    //(a)
    int x=5,y=8;
    if(y==8)
    if(x==5)
    cout<<"@@@@@"<<endl;
    else
    cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    cout<<endl;

    //(b)
    if(y==8)
    {
    if(x==5)
    cout<<"@@@@@"<<endl;
    }
    else
    {
    cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    }
    cout<<endl;

    //(c)
    if(y==8)
    {
    if(x==5)
    cout<<"@@@@@"<<endl;
    }
    else
    {
    cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    }
    cout<<"&&&&&"<<endl;
    cout<<endl;

    //(d)
    x=5,y=7;
    if(y==8)
    {
    if(x==5)
    cout<<"@@@@@"<<endl;
    }
    else
    {
    cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    }




    return 0;
}
