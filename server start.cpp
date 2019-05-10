#include "stdlib.h"
#include "iostream"
using namespace std;
int main()
{
	system("title ENDERCRAFT 2.5.1 server");
	char g;
	do
	{
		system("java -Xms2048M -Xmx2048M -jar forge-1.7.10-10.13.4.1614-1.7.10-universal.jar nogui");
		do
		{
			cout<<"server closed, restart it? (y/n) ";
			cin>>g;
		}while(g!='y' && g!='n');
	}while(g=='y');
	return 0;
}
