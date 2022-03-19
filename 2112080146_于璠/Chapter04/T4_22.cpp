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
    unsigned int row=10;
    while(row>=1)
    {
        unsigned int column=1;
        while(column<=10)
        {
            cout<<(row%2?"<":">")<<endl;
            column++;
        }
        row--;
    }



    return 0;
}
