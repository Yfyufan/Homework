/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void Question();
void zhengQuePingYu();
void cuoWuPingYu();

int main()
{
    Question();

    return 0;
}


void Question()
{
    srand(static_cast<unsigned int>(time(0)));
    unsigned int a=1+rand()%9;
    unsigned int b=1+rand()%9;
    cout<<"How much is "<<a<<" times "<<b<<" ? "<<endl;
    int answer;
    cin>>answer;
    if(a*b==answer)
    {
        zhengQuePingYu();
        Question();
    }

    if(a*b!=answer)
    {
        cuoWuPingYu();
        while(1)
        {
            cout<<"How much is "<<a<<" times "<<b<<" ? "<<endl;
            cin>>answer;
            if(a*b!=answer)
            cuoWuPingYu();
            if(a*b==answer)
            {
                zhengQuePingYu();
                cout<<"Game Over!"<<endl;
                break;
            }
        }
    }

}


void zhengQuePingYu()
{
    srand(static_cast<unsigned int>(time(0)));
    unsigned int a=1+rand()%4;
    switch(a)
    {
    case 1:
        cout<<"Very Good!"<<endl;
        break;
    case 2:
        cout<<"Excellent!"<<endl;
        break;
    case 3:
        cout<<"Nice work!"<<endl;
        break;
    case 4:
        cout<<"Keep up the good work!"<<endl;
        break;
    }
}
void cuoWuPingYu()
{
    srand(static_cast<unsigned int>(time(0)));
    unsigned int a=1+rand()%4;
       switch(a)
    {
    case 1:
        cout<<"No.Please try again."<<endl;
        break;
    case 2:
        cout<<"Wrong.Try once more."<<endl;
        break;
    case 3:
        cout<<"Don't give up!"<<endl;
        break;
    case 4:
        cout<<"No.Keep trying."<<endl;
        break;
    }

}
