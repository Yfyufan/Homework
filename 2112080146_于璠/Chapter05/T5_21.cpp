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
        cout<<"������Ա�����루1��2,3,4,��";
        cin>>n;
        switch(n)
        {


        case 1:
            int a;
            cout<<"�����뾭��ÿ�̶ܹ�����";
            cin>>a;
            cout<<"�������ܵ�нˮΪ��"<<a<<endl;
            break;
        case 2:
            cout<<"������Сʱ���Ĺ̶�Сʱ����";
            int b;
            cin>>b;
            cout<<"������Сʱ����ʱ";
            int c;
            cin>>c;
            int sum1;
            if(c<=40)sum1=c*b;
                else sum1=40*b+(c-40)*1.5*b;
            cout<<"Сʱ������нˮΪ��"<<sum1<<endl;
            break;
        case 3:
            cout<<"������Ӷ�𹤱�������ë����";
            int d;
            cin>>d;
            double sum2;
            sum2=250+d*0.057;
            cout<<"Ӷ�𹤱���нˮΪ��"<<sum2<<endl;
            break;
        case 4:
            cout<<"��ֱ�����Ƽ������������Ĳ�Ʒ�����Լ�ÿ����Ʒ�Ĺ̶���";
            int e,f;
            cin>>e>>f;
            int sum3;
            sum3=e*f;
            cout<<"�Ƽ�������нˮΪ��"<<sum3<<endl;
            break;
        }
    }
    return 0;
}
