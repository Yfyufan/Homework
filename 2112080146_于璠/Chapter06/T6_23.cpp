/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

void print(char a,int b)
{
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<a;
        }
        cout<<endl;
    }
}

int main()
{
    char a;int b;
    cin>>a>>b;
    print(a,b);
    return 0;
}
