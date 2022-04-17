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



int main()
{
    int a,b,c=0;
    int j=0,k=0;
    cin>>a>>b;
    int arra[100]={0};
    int arrb[100]={0};

    for(int i=1;i<=a;i++)
    {
        if(a%i==0)arra[j++]=i;
    }

    for(int i=1;i<=b;i++)
    {
        if(b%i==0)arrb[k++]=i;
    }

    for(int i=j-1;i>=0;i--)
    {
        for(int m=k-1;m>=0;m--)
        {
            if(arra[i]==arrb[m])
            {
                cout<<arra[i]<<endl;
                c=1;
                break;
            }

        }
        if(c==1)break;
    }


   return 0;
}
