/*************************************************************************
    > File Name: testString.cpp
    > Author: zcy
    > Email: zcy505414969@gmail.com
    > Created Time: 2018/3/19 20:43:25
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	void testDefinitionReference();
	void testOperation();
	void testStringArray();

	testStringArray();
//	testDefinitionReference();
//	testOperation();
	return 0;
}

void testDefinitionReference()
{
	string str1;
	string str2="China";
	
	cout<<"When str1 not assigned. str1:"<<str1<<endl; //test var not assigned
	cout<<"When str2 assigned. str2:"<<str2<<endl; //test var assigned
	
	str1 = str2;

	cout<<"str2 assigned to str1. str1:"<<str1<<" str2:"<<str2<<endl; 

	str1 = "then";

	cout<<"str1 assigned to \"then\". str1:"<<str1<<endl;

	str1[2] = 'a';

	cout<<"Replace the third character of str1 with a. str1:"<<str1<<endl;

//	str2[4] = "ese";

//	cout<<"Replace the fifth character of str2 with ese. str2:"<<str2<<endl;

	str1 = str2;

	cout<<"str2 assigned to str1. str1:"<<str1<<" str2:"<<str2<<endl; 

	str2 = "Changed";
	
	cout<<"str2 changed. str1:"<<str1<<" str2:"<<str2<<endl; 

}

void testOperation()
{
	string str1 = "china";
	string str2 = "get";
	
	cout<<"string compare"<<endl;
	cout<<"str1:"<<str1<<" str2:"<<str2<<endl;
	cout<<"str1 < str2 :"<<(str1<str2)<<endl;
	cout<<"int('c') :"<<int('c')<<endl;
	cout<<"char(99) :"<<char(99)<<endl;
}

void testStringArray()
{
	int n;
	cout<<"input string array length:";
	cin>>n;
	string name[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"input number person"<<i+1<<" name:"<<endl;
		cin>>name[i];
	}
	for(int i = 0; i < n; i++)
	{
		cout<<name[i]<<endl;
	}
}
