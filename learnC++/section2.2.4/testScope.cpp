/*************************************************************************
    > File Name: testScope.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/6/4 22:27:54
 ************************************************************************/

#include<iostream>
using namespace std;
//int i = 42;
int main()
{
//	//practice 2.13
//	int i = 100;
//	int j = i;
//	cout<<"j = "<<j; //100

	//practice 2.14
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	cout<< i << " " << sum << endl; //100 45
	return 0;
}
