#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"������һ��������";
	cin>>n;
	cout<<"number  "<<n<<"  ����";
	for(k=1;k<=n;k++)
	   if(n%k==0) 
	      cout<<k<<"  ";
	      cout<<endl;
	      return 0;
}
