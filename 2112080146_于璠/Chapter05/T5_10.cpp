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
    for(int i=1;i<=5;i++)
    {
        cout<<i<<"的阶乘为:";
        int j=i,sum=1;
        for(;j>0;j--)
        {
            sum*=j;
        }
        cout<<sum<<endl;

    }

    //下面求20的阶乘。
    int i=20,sum=1;
    for(;i>0;i--)sum*=i;
    cout<<sum;
    //可知若是求20的阶乘，其数字过大，int型已无法储存。
    return 0;
}
