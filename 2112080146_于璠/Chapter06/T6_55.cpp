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
unsigned int rollDice()
{

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
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is "<<myPoint<<endl;
        break;


    }
    while(CONTINUE==gameStatus)
    {
        sumOfDice=rollDice();
        if(sumOfDice==myPoint)
            gameStatus=WON;
        else if(sumOfDice==7)
            gameStatus=LOST;
    }


    if(WON==gameStatus)
        cout<<"Player wins"<<endl;
    else
        cout<<"Playes losses"<<endl;




    return 0;
}
