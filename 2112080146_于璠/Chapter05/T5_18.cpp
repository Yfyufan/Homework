/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 24th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{   cout<<setw(4)<<"数字"
        <<setw(21)<<"二进制"
        <<setw(21)<<"八进制"
        <<setw(21)<<"十六进制"<<endl;
    for(int i=1;i<=256;i++)
    {
        cout<<setw(4)<<dec<<i;
        int j=i,a=0,k=0;
        while(j)
        {
            a+=(j%2)*pow(10,k);
            j/=2;
            k++;
        }
        cout<<setw(21)<<a;
        cout<<setw(21)<<oct<<i;
        cout<<setw(21)<<hex<<i;
        cout<<endl;
    }
    return 0;
}
