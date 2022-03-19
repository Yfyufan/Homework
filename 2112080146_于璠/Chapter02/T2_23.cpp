/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function: compare five numbers
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,min,max;cin>>a>>b>>c>>d>>e;
    min=a;max=a;
    if(b<min)min=b;if(b>max)max=b;
    if(c<min)min=c;if(c>max)max=c;
    if(c<min)min=c;if(c>max)max=c;
    if(d<min)min=d;if(d>max)max=d;
    if(e<min)min=e;if(e>max)max=e;
    cout<<min<<" "<<max;
    return 0;
}
