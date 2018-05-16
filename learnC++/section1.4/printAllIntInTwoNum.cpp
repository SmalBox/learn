/*************************************************************************
    > File Name: printAllIntInTwoNum.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/16 20:12:52
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int i, j, x;
	cout<<"Please enter to integers numbers:"<<endl;
	cin>>i>>j;
	if(i>j)
	{
		x = i;
		i = j;
		j = x;
	}
	i++;
	while(i<j)
	{
		cout<<i<<endl;
		i++;
	}
	return 0;
}
