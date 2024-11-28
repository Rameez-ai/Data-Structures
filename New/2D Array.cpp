#include<iostream>
using namespace std;
int main()
{
	int s[2][2];
	int i, j;
	cout<<"\n2D Array\n"<<endl;
	cout<<"Input 2D Array : "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>s[i][j];
		}
	}
	cout<<"Elements of 2D Array : "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<s[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
	
}
