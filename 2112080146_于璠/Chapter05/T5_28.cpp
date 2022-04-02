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
    cout<<"The Twelve days of Chrismas"<<endl;
    cout<<endl;
    string *day = new string[12];
    string *gift= new string[12];
    for(int i=1;i<=12;i++)
    {
    switch(i)
    {
    case 1:day[i-1]="first";break;
    case 2:day[i-1]="second";break;
    case 3:day[i-1]="third";break;
    case 4:day[i-1]="fourth";break;
    case 5:day[i-1]="fifth";break;
    case 6:day[i-1]="sixth";break;
    case 7:day[i-1]="seventh";break;
    case 8:day[i-1]="eighth";break;
    case 9:day[i-1]="ninth";break;
    case 10:day[i-1]="tenth";break;
    case 11:day[i-1]="eleventh";break;
    case 12:day[i-1]="twelfth";break;
    }

    switch(i)
    {
    case 12:gift[i-1]+="12 Drummers Drumming\n";
    case 11:gift[i-1]+="Eleven Pipers Piping\n";
    case 10:gift[i-1]+="Ten lords a Leaping\n";
    case 9:gift[i-1]+="Nine ladies Dancing\n";
    case 8:gift[i-1]+="Eight Maids a Miking\n";
    case 7:gift[i-1]+="Seven Swans a Swimming\n";
    case 6:gift[i-1]+="Six Geese a Laying\n";
    case 5:gift[i-1]+="Five Golden Rings\n";
    case 4:gift[i-1]+="Four Cailing Birds\n";
    case 3:gift[i-1]+="Three French Hens\n";
    case 2:gift[i-1]+="Two Turtle Doves\n";
    case 1:
        if(i!=1)gift[i-1]+="and a Paitridge in a Pear Tree";
        if(i==1)gift[i-1]+="A Paitridge in a Pear Tree";
    }

    cout<<"On the "<<day[i-1]<<" day of Christmas\n";
    cout<<"my trun love sent to me£º\n";
    cout<<gift[i-1]<<"\n";
    cout<<endl;



    }

    return 0;
}
