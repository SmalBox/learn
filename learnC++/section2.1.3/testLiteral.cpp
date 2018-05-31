/*************************************************************************
    > File Name: testLiteral.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/31 23:02:20
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	//practice 2.5:
	int a = 9, b = 7;
//	int c = 09;
	int d = 07;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<d<<endl;

	//practice 2.6:
	cout<<"============="<<endl;
	cout<<"Who goes with F\145rgus?\012"<<endl;

	//practice 2.7:
	cout<<"int: "<<sizeof(int)<<endl;
	cout<<"float: "<<sizeof(float)<<endl;
	cout<<"double: "<<sizeof(double)<<endl;
	cout<<"long: "<<sizeof(long)<<endl;
	cout<<"long long: "<<sizeof(long long)<<endl;
	cout<<"long double: "<<sizeof(long double)<<endl;

	cout<<3.14e1L<<" "<<sizeof(3.14e1L)<<endl; //literal: long double 31.4
	cout<<1.024e3F<<" "<<sizeof(1.024e3F)<<endl; //literal: float 1024
	cout<<1.024e3L<<" "<<sizeof(1.024e3L)<<endl; //literal: long double 1024 
	cout<<1.024e3<<" "<<sizeof(1.024e3)<<endl; //literal: double 1024 
	cout<<1024.0F<<" "<<sizeof(1024.0F)<<endl; //literal: float 1024 
//	cout<<1024F<<" "<<sizeof(1024F)<<endl; //literal: error 
	cout<<3.14L<<" "<<sizeof(3.14L)<<endl; //literal: long double 3.14
	
	//practice 2.8:
	cout<<"2M\n";
	cout<<"2\tM\n";
	return 0;
}
