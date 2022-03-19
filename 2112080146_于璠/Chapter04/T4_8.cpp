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
    unsigned x,y,i=1,power=1;
    cin>>x>>y;
    while(i<=y)
    {
        power*=x;
        i++;
    }
    cout << power << endl;
    return 0;
}
