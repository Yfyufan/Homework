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

int tripleByValue(int n)
{
    return 3*n;
}

int tripleByReference(int &n)
{
    return 3*n;
}
int main()
{
   int n1;
   cin>>n1;
   cout<<tripleByValue(n1)<<endl;
   cout<<n1<<endl;
   cout<<endl;
   cout<<endl;

   int n2;
   cin>>n2;
   int &ra=n2;
   cout<<tripleByReference(ra)<<endl;
   cout<<n2;
   cout<<endl;


    return 0;
}
