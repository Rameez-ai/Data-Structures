#include<iostream>
using namespace std;
int main()
{
	int arr1[10][10];
	int n, m;
	int i, j;
	cout<<"\t\t2D Array"<<endl;
	cout<<"Enter Rows : ";
	cin>>n;
	cout<<"Enter Columns : ";
	cin>>m;
	cout<<"Enter Element of 2D Array one by one : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr1[i][j];
		}
	}
	int target;
	bool found=false;
	cout<<"Enter Your Target Element: ";
	cin>>target;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr1[i][j]==target)
			{
				found=true;
				break;
			}
		}
	}
	if(found)
	{
		cout<<"\nElement Found."<<endl;
	}
	else
	{
		cout<<"\nElement Not Found."<<endl;
	}
	
	return 0;
}

