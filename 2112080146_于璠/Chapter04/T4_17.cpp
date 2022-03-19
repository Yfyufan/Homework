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
    int counter=1,number,largest;
    while(counter<=10)
    {
        if(counter==1)
        {
            cin>>number;
            largest=number;
            counter++;
        }
        else
        {
            cin>>number;
            if(number>largest)largest=number;
            counter++;
        }

    }
    cout<<largest;
    return 0;
}
