#include<iostream>
using namespace std;
int main(){
	int i=0,j=0,n;
	cout<<"enter some integers please(enter 0 to quit):"<<endl;
	cin>>n;
	while(i!=0){
		if(n>0)i+=1;
		if(n<0)j+=1;
		cin>>n;
	}
	cout<<"Count of positive integers:"<<i<<endl;
	cout<<"Count of negative integers:"<<j<<endl;
	return 0; 
}
