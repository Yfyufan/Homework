/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a[5]={2,4,6,8,10};
    int b[5]={3,5,7,9,11};
    int c[5]={6,10,14,18,22};
    srand(static_cast<unsigned int>(time(0)));
    cout<<a[rand()%5]<<endl;
    cout<<b[rand()%5]<<endl;
    cout<<c[rand()%5]<<endl;

    return 0;
}
