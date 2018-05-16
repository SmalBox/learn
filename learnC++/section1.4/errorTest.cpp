/*************************************************************************
    > File Name: errorTest.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/5/16 20:25:47
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	//syntax error
//	cout<<"read each file."<<endl: //error: expected ';' before ':' token
//	cout<< update master. <<endl; //error: 'update' was not declared in this scope
//	cout<<"write new master." endl; // error: expected ';' before 'endl
	
	//type error
	cout<<"please enter int and double number:"<<endl;
	int i;
	double j;
	float m;
	cin>>i;
	cin>>j;
	cin>>m;
	cout<<"i value is "<<i<<endl;//enter char print 0;
	cout<<"j value is "<<j<<endl;//enter char print 1.79163e-307;
	cout<<"m value is "<<m<<endl;//enter char print 4.91678e+033;
	//declaration error
	int v1, v2 = 0;
//	cin>>v>>v2; //error: 'v' was not declared in this scope
	return 0; //lose ";" print: error: expected ';' before '}' token
}
