#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	
	while(num>9)
	{
		int ans=0, rem;
		while(num!=0)
		{
			rem = num%10;
			num/=10;
			ans = ans+rem;
		}
		num=ans;
	}
	cout<<"Sum of Digits of the Given Number in one Digit is : "<<num;
	return 0;
}
