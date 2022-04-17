/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double x;
    cin>>x;
    cout<<"原始数据\t"<<"舍入后的数值\t"<<endl;
    int y=floor(x+0.5);
    cout<<x<<"\t";
    cout<<y<<"\t"<<endl;


    return 0;
}
