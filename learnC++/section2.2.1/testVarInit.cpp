/*************************************************************************
    > File Name: testVarInit.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/6/1 22:32:45
 ************************************************************************/

#include<iostream>
using namespace std;

std::string global_str;
int global_int;

int main()
{
	//practice 2.9
//	cin>>int input_value;
//	int i = {
//		3.14
//	};
//	double salary = wage = 9999.99;
//	int i = 3.14;
//
//	//practice 2.10
	int local_int;
	std::string local_str;
	cout<<"global_str"<<global_str;
	cout<<"global_int"<<global_int;
	cout<<"local_str"<<local_str;
	cout<<"local_int"<<local_int;
	return 0;
}
