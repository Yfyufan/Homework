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

double celsius(double n)
{
    return (n-32)/1.8;
}

double fahrenheit(double n)
{
    return n*1.8+32;
}

int main()
{
    cout<<setw(10)<<"ÉãÊÏÎÂ¶È"<<setw(10)<<"»ªÊÏÎÂ¶È"<<endl;
    for(int i=1;i<=100;i++)
    {
        cout<<setw(10)<<i<<setw(10)<<fahrenheit(i)<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<setw(10)<<"»ªÊÏÎÂ¶È"<<setw(10)<<"ÉãÊÏÎÂ¶È"<<endl;
    for(int i=32;i<=212;i++)
    {
        cout<<setw(10)<<i<<setw(10)<<celsius(i)<<endl;
    }
    return 0;
}
