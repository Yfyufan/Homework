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
    cout<<(i==1)<<endl;//��ӡ���Ϊ1

    //(b)
    cout<<(j==3)<<endl;//��ӡ���Ϊ0

    //(c)
    cout<<(i>=1&&j<4)<<endl;//��ӡ���Ϊ1

    //(d)
    cout<<(m<=99&&k<m)<<endl;//��ӡ���Ϊ0

    //(e)
    cout<<(j>=i||k==m)<<endl;//��ӡ���Ϊ1

    //(f)
    cout<<(k+m<j||3-j>=k)<<endl;//��ӡ���Ϊ0

    //(g)
    cout<<(!m)<<endl;//��ӡ���Ϊ0

    //(h)
    cout<<(!(j-m))<<endl;//��ӡ���Ϊ1

    //(i)
    cout<<(!(k>m))<<endl;//��ӡ���Ϊ0

    return 0;
}
