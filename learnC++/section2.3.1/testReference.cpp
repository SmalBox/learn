/*************************************************************************
    > File Name: testReference.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/6/4 23:01:23
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
//	//practice 2.15
//	int ival = 1.01;
//	//error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
//	//无效的从int类型右值到int引用类型的非常量引用初始化
//	int &rval1 = 1.01; 
//	int &rval2 = ival;
//	//error: 'rval3' declared as reference but not initialized'
//	int &rval3;

//	//practice 2.16
//	int i = 0, &r1 = i;
//	double d = 1, &r2 = d;
//	r2 = 3.14159;
//	cout<<"r2 "<<r2<<endl;
//	r2 = r1;
//	cout<<"r2 "<<r2<<endl;
//	i = r2;
//	cout<<"i "<<i<<endl;
//	r1 = d;
//	cout<<"r1 "<<r1<<endl;

	//practice 2.17
	int i, &ri = i;
	i = 5; ri = 10;
	cout<<i<<" "<<ri<<endl;

	return 0;
}
