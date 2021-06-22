#include<iostream>
using namespace std;
int powerof2(int n)
{
	return (n && !(n & n-1)); 
}
int main()
{
	int n;
	cout<<"Enter the no."<<endl;
	cin>>n;
	cout<<powerof2(n);
}
