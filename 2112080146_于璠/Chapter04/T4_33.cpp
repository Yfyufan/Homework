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
    int a,b,c,t;
    cin>>a>>b>>c;
    if(a>b){t=a;a=b;b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;}
    if(a*a+b*b==c*c)cout<<"���Ա�ʾһ��ֱ�������ε�������";
    else cout<<"�����Ա�ʾһ��ֱ�������ε�������";

    return 0;
}
