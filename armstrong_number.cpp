#include<iostream>
#include<math.h>
using namespace std;
void arm(int a)
{
	int sum=0,armstrong=0,count=0;
	int x = a;
	int y=a;
	while(1<=x)
	{
		x%10;
		count+=1;
		x = x/10;
	}
	while(1<=a)
	{
		armstrong+=pow((a%10),count);
		a = a/10;
	}
	if(y==armstrong)
	{
		cout<<"Armstrong Number!";
	}
	else
	{
		cout<<"Not Armstrong Number!";
	}
	
}
int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	arm(n);
	
	return 0;
}
