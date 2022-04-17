/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Apr 17th,2022
 *College:  School of Computer Science and Information Engineering
 *Function:
 */
 #include <iostream>
 #include <random>
 #include <ctime>

using namespace std;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> randomInt1(1,3);
    uniform_int_distribution<int> randomInt2(1,100);
    uniform_int_distribution<int> randomInt3(0,9);
    uniform_int_distribution<int> randomInt4(1000,1112);
    uniform_int_distribution<int> randomInt5(-1,1);
    uniform_int_distribution<int> randomInt6(-3,11);
    int x1=randomInt1(engine);
    int x2=randomInt2(engine);
    int x3=randomInt3(engine);
    int x4=randomInt4(engine);
    int x5=randomInt5(engine);
    int x6=randomInt6(engine);

    cout<<x1<<endl;
    cout<<x2<<endl;
    cout<<x3<<endl;
    cout<<x4<<endl;
    cout<<x5<<endl;
    cout<<x6<<endl;

    return 0;
}
