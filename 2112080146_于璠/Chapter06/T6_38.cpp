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

void hanNuoTa(int n,int a,int b,int c);

int main()
{
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        hanNuoTa(n,a,b,c);
        return 0;
}

void hanNuoTa(int n,int a,int b,int c)
{
    if(n==1)
    cout<<a<<"¡ú"<<c<<endl;
    else
    {
        hanNuoTa(n-1,a,c,b);
        cout<<a<<"¡ú"<<c<<endl;
        hanNuoTa(n-1,b,a,c);
    }
}


