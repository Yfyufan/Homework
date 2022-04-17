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
#include <random>
#include <iomanip>

using namespace std;

default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,6);
unsigned int bankBalance=1000;
unsigned int wager;
unsigned int rollDice()
{

    while(1)
   {
       cout<<"请输入您的赌注(小于等于"<<bankBalance<<"美金）"<<endl;
       cin>>wager;
       if(wager<=bankBalance)break;
   }
    unsigned int die1=randomInt(engine);
    unsigned int die2=randomInt(engine);
    unsigned int sum=die1+die2;
    cout<<"Player rolled "<<die1<<" + "<<die2
         <<" = "<<sum<<endl;
    return sum;

}

int main()
{
    enum Status { CONTINUE,WON,LOST };

    unsigned int sumOfDice=rollDice();
    unsigned int myPoint=0;
    Status gameStatus=CONTINUE;
    switch( sumOfDice )
    {
    case 7:
    case 11:
        gameStatus=WON;
        bankBalance+=wager;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        bankBalance-=wager;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is "<<myPoint<<endl;
        bankBalance+=wager;
        cout<<"bankBalance: "<<bankBalance;
        break;


    }
    while(CONTINUE==gameStatus)
    {
        sumOfDice=rollDice();
        if(sumOfDice==myPoint)
        {
            gameStatus=WON;
            bankBalance+=wager;
        }

        else if(sumOfDice==7)
        {
            gameStatus=LOST;
            bankBalance-=wager;
        }
    }


    if(WON==gameStatus)
    {
        cout<<"Player wins"<<endl;
        cout<<"bankBalance: "<<bankBalance;

    }
    else
    {
        cout<<"Playes losses"<<endl;
        cout<<"bankBalance: "<<bankBalance;
    }




    return 0;
}
