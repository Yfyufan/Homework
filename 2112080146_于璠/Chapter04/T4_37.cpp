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
    cout<<"请输入当前世界人口数：";
    double a,sum;cin>>a;sum=a;
    cout<<"请输入人口增长率：    ";
    double b;cin>>b;
    double c;
    for(int i=1;i<=75;i++)
    {
        for(int q=1;q<=3;q++)
        {
            if(q==1)cout<<i<<"\t";
            if(q==2)
            {
                c=a*b;
                a+=c;
                cout<<a<<"\t";
                if(a==sum*2)
                cout<<"此年是两倍\t";
            }
            if(q==3)cout<<c<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
