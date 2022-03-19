/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function: Calculate the cost of driving
 */
 #include <iostream>

using namespace std;

int main()
{
    cout <<"请依次输入每天开的英里数、每加仑汽油的价格、每加仑汽油可以开的平均英里数、每日的停车费、每日的通行费" << endl;
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e;
    f=a*b/c+d+e;
    cout<<"每日开车消费为"<< f <<endl;
    return 0;
}
