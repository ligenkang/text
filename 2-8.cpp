#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"请输入一个整数：";
	cin>>n;
	cout<<"number  "<<n<<"  因数";
	for(k=1;k<=n;k++)
	   if(n%k==0) 
	      cout<<k<<"  ";
	      cout<<endl;
	      return 0;
}
