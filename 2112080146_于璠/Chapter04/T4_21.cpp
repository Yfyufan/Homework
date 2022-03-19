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
    unsigned int count=1;
    while(count<=10)
    {
        cout<<(count%2?"****":"++++++")<<endl;
        ++count;
    }
    return 0;
}
