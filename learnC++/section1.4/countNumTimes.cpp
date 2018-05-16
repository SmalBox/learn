/*************************************************************************
    > File Name: countNumTimes.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/17 0:12:24
 ************************************************************************/
//input same data: normal exit.
//input each one is different: first is normal, and next it only input some
//data and press the enter buttom rather than need input "/" in the last to
//stop this time input. At the end, it will be output the last data.
#include<iostream>
using namespace std;
int main()
{
	int currVal = 0, val = 0;
	if(cin>>currVal)
	{
		int cnt = 1;
		while(cin>>val)
		{
			if(val == currVal)
				++cnt;
			else
			{
				cout<<currVal<<" occurs "<<cnt<<" times "<<endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout<<currVal<<" occurs "<<cnt<<" times "<<endl;
	}
	return 0;
}
