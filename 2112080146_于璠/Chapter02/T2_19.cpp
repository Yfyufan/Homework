/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function: print sum,average,product,smallest,largest of "a,b,c" in turn
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "Input three different integers:";
    int a,b,c,Sum,Average,Product,t;
    cin>>a>>b>>c;
    Sum=a+b+c;
    Average=Sum/3;
    Product=a*b*c;
    if(a>b){t=a;a=b,b=t;}
    if(a>c){t=a,a=c,c=t;}
    if(b>c){t=b,b=c,c=t;}
    cout<<"Sum is "<<Sum<<endl;
    cout<<"Average is "<<Average<<endl;
    cout<<"Product is "<<Product<<endl;
    cout<<"Smallest is "<<a<<endl;
    cout<<"Largest is "<<c<<endl;
    return 0;
}
