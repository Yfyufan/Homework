/*
 *Filename: main.cpp
 *Author:   Fan Yu
 *Email:    3076757325@qq.com
 *Date:     Mar 6th,2022
 *College:  School of Computer Science and Information Engineering
 *Function: calculate the BMI
 */
 #include <iostream>

using namespace std;

int main()
{   double a,b,c;
    cout<<"请输入你的体重（以磅为单位），在输入你的身高（以英尺为单位）。"<<endl;
    cin>>a>>b;
    c=a*703/b/b;
    cout<<"BMT VALUES "<<c<<endl;
    cout<<"Underweight :less than 18.5"<<endl;
    cout<<"Normal      :between 18.5 and 24.9"<<endl;
    cout<<"Overweight  :between 25 and 29.9"<<endl;
    cout<<"Obese       :30 or greater"<<endl;
     return 0;
}
