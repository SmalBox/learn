/*************************************************************************
    > File Name: comment.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/16 19:47:02
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	cout<<"/*"; //correct
	cout<<"*/"; //correct
//	cout<</*"*/"*/;
	cout<</*"*/"/*"/*"*/; //correct.
	return 0;
}
