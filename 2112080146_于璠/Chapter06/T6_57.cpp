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
        cout<<"Very Good ! "<<endl;
        Question();
    }

    if(a*b!=answer)
    {
        cout<<"No,please try again."<<endl;
        while(1)
        {
            cout<<"How much is "<<a<<" times "<<b<<" ? "<<endl;
            cin>>answer;
            if(a*b!=answer)
            cout<<"No,please try again."<<endl;
            if(a*b==answer)
            {
                cout<<"Very Good!"<<endl;
                cout<<"Game Over!"<<endl;
                break;
            }
        }
    }

}
