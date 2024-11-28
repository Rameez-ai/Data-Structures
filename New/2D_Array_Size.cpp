#include<iostream>
using namespace std;
int main()
{
	int s[10][10];
	int i, j;
	int n, m;
	cout<<"\n2D Array\n"<<endl;
	cout<<"Enter Rows : ";
	cin>>n;
	cout<<"Enter Columns : ";
	cin>>m;
	cout<<"Input 2D Array : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>s[i][j];
		}
	}
	cout<<"Elements of 2D Array : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<"\t"<<s[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
	
}
