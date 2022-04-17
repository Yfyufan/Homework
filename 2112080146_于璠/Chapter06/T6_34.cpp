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

void game()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1,1000);
    cout<<"I have a number between 1 and 1000."<<endl;
    cout<<"Can you guess my number?"<<endl;
    cout<<"Please type your first guess."<<endl;
    unsigned int a=randomInt(engine);
    int n;
    cin>>n;
    if(n==a)
    {
        cout<<"Excellent! You guessed the number!"<<endl;
        cout<<"Would you like to play again(y or n)?"<<endl;
        char b;
        cin>>b;
        if(b=='n')cout<<"Game over!"<<endl;
        if(b=='y')
        {
            game();
        }
    }
    if(n>a)
    {
        cout<<"Too high.Try again!"<<endl;

    }
    if(n<a)
    {
        cout<<"Too low.Try again!"<<endl;

    }

}

int main()
{
    game();
    return 0;
}

