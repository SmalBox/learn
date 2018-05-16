/*************************************************************************
    > File Name: enterSum.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/16 21:04:33
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0, x;
	cout<<"please enter some int number:"<<endl;
	while(cin>>x)
	{
		sum+=x;
	}
	cout<<"enter numbers sum is: "<<sum<<endl;
	return 0;
}
