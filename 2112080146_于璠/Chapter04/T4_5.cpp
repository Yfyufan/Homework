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
    unsigned int sum=0,x=1;
    while(x<11)
    {
        sum+=x;
        x++;
    }
    cout << "The sum is "<< sum << endl;
    return 0;
}
