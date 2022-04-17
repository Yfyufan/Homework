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

template< typename T>
T maxinum(T a,T b)
{
    if(a>=b) return a;
    else return b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<maxinum(a,b)<<endl;

    double c,d;
    cin>>c>>d;
    cout<<maxinum(c,d)<<endl;

    char e,f;
    cin>>e>>f;
    cout<<maxinum(e,f)<<endl;


    return 0;
}
