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
    int side1,side2,hypotenuse,x=5;
    for(side1=3;side1<=500;side1++)
    {
        for(side2=side1;side2<=500;side2++)
        {
            for(hypotenuse=side2;hypotenuse<=500;hypotenuse++)
            {
                if(side1*side1+side2*side2==hypotenuse*hypotenuse)
                {
                    cout<<"("<<side1<<","<<side2<<","<<hypotenuse<<")";
                    x++;
                    if(x%5==0) cout<<endl;
                }
            }
        }
    }
    return 0;
}
