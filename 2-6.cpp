#include<iostream>
using namespace std;
int main()
{
	int n,right_digit;
    cout<<"请输入您要输入的数字：";
	cin>>n;
	cout<<"该数字的倒序是：" ;
	do{
		right_digit=n%10;
		cout<<right_digit;
		n/=10;    
	}while (n!=0);
	cout<<endl;//此处可添加cout<<endl; 可有可无，对运行无影响，可删去 
	return 0;//return 0对结果影响也不大，可删去 
}//输入小数，转化为整形； 输入的数字超出int范围，则范围之外的数字不计算 
