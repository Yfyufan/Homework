/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    for(count=1;count<=10;count++)
    {

        cout<<count<<" ";
        if(count==5)count=10;
    }
    cout<<"\nBroke out of loop at count = "<<count-6<<endl;
    return 0;
}
