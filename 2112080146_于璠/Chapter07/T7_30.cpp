/*
*FileName:   T7_30.cpp
*Author:     Fan Yu
*E-mail:     208237042@qq.com
*Date:       2022.4.15
*College:    School of Computer Science and Information Engineering
*Function:   ??ӡarray??????
*/
#include<iostream>
using namespace std;

void printArray(int arr[], int b, int e)
{
	cout << arr[b] << "\t";
	if (b == e)return;
	return printArray(arr, b + 1, e);
}

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	printArray(arr, 0, 4);
	return 0;
}
