/*Auto filling-in shadowsockets config file.
 * Only filling-in serverIP,serverPort,Password and config file name.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string server_ip,server_port,password;
	string configFileName;

	//input server_ip,server_port,password
	cout<<"please enter config file name:"<<endl;
	cin>>configFileName;
	cout<<"please enter server ip:"<<endl;
	cin>>server_ip;
	cout<<"please enter server port:"<<endl;
	cin>>server_port;
	cout<<"please enter server password:"<<endl;
	cin>>password;
	cout<<"Start write into "<<configFileName<<". please hold on."<<endl;
	//write file
	ofstream outfile(configFileName.c_str(), ios::out);
	if(!outfile)
	{
		cerr<<"open error!"<<endl;
	}

	outfile<<"{\n";
//	//write test
	outfile<<"\t\"server\":\""<<server_ip<<"\",\n";
	outfile<<"\t\"server_port\":"<<server_port<<",\n";
	outfile<<"\t\"password\":\""<<password<<"\",\n";
	outfile<<"\t\"timeout\":"<<300<<",\n";
	outfile<<"\t\"method\":\""<<"aes-256-cfb"<<"\"\n";
	outfile<<"}\n";

	outfile.close();
	cout<<"Successful "<<configFileName<<" generation!"<<endl;
	return 0;
}
