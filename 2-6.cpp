#include<iostream>
using namespace std;
int main()
{
	int n,right_digit;
    cout<<"��������Ҫ��������֣�";
	cin>>n;
	cout<<"�����ֵĵ����ǣ�" ;
	do{
		right_digit=n%10;
		cout<<right_digit;
		n/=10;    
	}while (n!=0);
	cout<<endl;//�˴������cout<<endl; ���п��ޣ���������Ӱ�죬��ɾȥ 
	return 0;//return 0�Խ��Ӱ��Ҳ���󣬿�ɾȥ 
}//����С����ת��Ϊ���Σ� ��������ֳ���int��Χ����Χ֮������ֲ����� 
