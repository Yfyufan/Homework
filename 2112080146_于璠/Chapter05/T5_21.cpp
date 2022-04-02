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
    int n;
    while(1)
    {
        cout<<"请输入员工代码（1，2,3,4,）";
        cin>>n;
        switch(n)
        {


        case 1:
            int a;
            cout<<"请输入经理每周固定工资";
            cin>>a;
            cout<<"经理这周的薪水为："<<a<<endl;
            break;
        case 2:
            cout<<"请输入小时工的固定小时工资";
            int b;
            cin>>b;
            cout<<"请输入小时工工时";
            int c;
            cin>>c;
            int sum1;
            if(c<=40)sum1=c*b;
                else sum1=40*b+(c-40)*1.5*b;
            cout<<"小时工这周薪水为："<<sum1<<endl;
            break;
        case 3:
            cout<<"请输入佣金工本周销售毛利：";
            int d;
            cin>>d;
            double sum2;
            sum2=250+d*0.057;
            cout<<"佣金工本周薪水为："<<sum2<<endl;
            break;
        case 4:
            cout<<"请分别输入计件工本周生产的产品件数以及每件产品的固定金额：";
            int e,f;
            cin>>e>>f;
            int sum3;
            sum3=e*f;
            cout<<"计件工本周薪水为："<<sum3<<endl;
            break;
        }
    }
    return 0;
}
