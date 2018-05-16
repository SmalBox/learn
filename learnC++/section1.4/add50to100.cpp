/*************************************************************************
    > File Name: add50to100.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/16 20:02:48
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int sum=0,i = 50;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	cout<<"add 50 to 100 equals "<<sum<<endl;
	return 0;
}
