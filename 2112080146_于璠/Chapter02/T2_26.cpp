/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function: print graphicals with "*" to screen
 */
#include <iostream>

using namespace std;

int main()
{   int i;
    cout <<"* * * * * * *"<< endl;
    cout <<" * * * * * * *"<< endl;
    cout <<"* * * * * * *"<< endl;
    cout <<" * * * * * * *"<< endl;
    cout <<"* * * * * * *"<< endl;
    cout <<" * * * * * * *"<< endl;
    cout <<"* * * * * * *"<< endl;
    cout <<" * * * * * * *"<< endl;
    cout<<endl;
    for(i=1;i<9;i++)
    {
        if(i%2!=0)cout <<"* * * * * * *"<< endl;
        else      cout <<" * * * * * * *"<< endl;
    }
    return 0;
}
