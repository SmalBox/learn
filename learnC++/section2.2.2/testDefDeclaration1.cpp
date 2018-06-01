/*************************************************************************
    > File Name: testDefDeclaration1.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/6/2 0:05:19
 ************************************************************************/

#include<iostream>
using namespace std;
int file1_var1;
extern int file2_var2;
//extern int file2FunctionVar;
int main()
{
	extern int file2_var1;
	file2_var1 = 100;
	file2_var2 = 20;
	int mainVar;
	cout<<mainVar<<endl;
	cout<<"file2_var1 "<<file2_var1<<endl; //file2_var1 10
	cout<<"file2_var2 "<<file2_var2<<endl; //file2_var2 0 
//	cout<<"file2FunctionVar "<<file2FunctionVar<<endl;
	return 0;
}
