/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int i=1,j=2,k=3,m=2;
    //(a)
    cout<<(i==1)<<endl;//打印结果为1

    //(b)
    cout<<(j==3)<<endl;//打印结果为0

    //(c)
    cout<<(i>=1&&j<4)<<endl;//打印结果为1

    //(d)
    cout<<(m<=99&&k<m)<<endl;//打印结果为0

    //(e)
    cout<<(j>=i||k==m)<<endl;//打印结果为1

    //(f)
    cout<<(k+m<j||3-j>=k)<<endl;//打印结果为0

    //(g)
    cout<<(!m)<<endl;//打印结果为0

    //(h)
    cout<<(!(j-m))<<endl;//打印结果为1

    //(i)
    cout<<(!(k>m))<<endl;//打印结果为0

    return 0;
}
