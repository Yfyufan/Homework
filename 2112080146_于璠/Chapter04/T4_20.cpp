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
    int a,i=10,j=0,q=0;
    while(i)
    {
      cout<<"Enter result (1=pass,2=fail):";
      cin>>a;
      if(a!=1&&a!=2) cout<<"请输入有效值，1或者2"<<endl;
      if(a==1||a==2)i--;
      if(a==1)j++;
      if(a==2)q++;
    }
    cout<<"Passed:"<<j<<endl;
    cout<<"Failed:"<<q<<endl;
    if(j>=8)cout<<"Bonus to instructor!";
    return 0;
}
