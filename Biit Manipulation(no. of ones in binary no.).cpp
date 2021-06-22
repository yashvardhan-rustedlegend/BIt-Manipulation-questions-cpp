#include<iostream>
using namespace std;
int numberofone(int n)
{
	int count=0;
	while(n!=0)//or you can write n also(it will be true for n!=0, if n becomes zero loop will break.)
	{
		count++;
		n= n & (n-1);
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter the no.";
	cin>>n;
	cout<<numberofone(n);
}
