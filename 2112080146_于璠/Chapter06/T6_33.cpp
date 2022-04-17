/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include<ctime>
#include<cstdlib>
#include<random>

using namespace std;




int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(0,1);
    int counter0=0,counter1=0;
    for(int i=1;i<=100;i++)
    {
        if(randomInt(engine)==0)counter0++;
        if(randomInt(engine)==1)counter1++;
    }
    cout<<counter0<<endl;
    cout<<counter1<<endl;
    return 0;
}
