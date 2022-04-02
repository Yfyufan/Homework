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
     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         if(i<=(n+1)/2)
         {
             for(int j=1;j<=(n-2*i+1)/2;j++){cout<<" ";}
             for(int k=1;k<=2*i-1;k++){cout<<"*";}
             for(int j=1;j<=(n-2*i+1)/2;j++){cout<<" ";}
             cout<<endl;
         }
         else
         {
             for(int j=1;j<=i-((n+1)/2);j++){cout<<" ";}
             for(int k=1;k<=2*n+1-2*i;k++){cout<<"*";}
             for(int j=1;j<=i-((n+1)/2);j++){cout<<" ";}
             cout<<endl;

         }
     }
    return 0;
}
