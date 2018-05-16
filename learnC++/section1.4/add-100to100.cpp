/*************************************************************************
    > File Name: add-100to100.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/16 20:21:56
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for(int i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	cout<<"add -100 to 100 equal "<<sum<<endl;
	return 0;
}
