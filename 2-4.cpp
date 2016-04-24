#include<iostream>
using namespace std;
int main()
{
	int day;
	cin>>day;
	switch(day){
		case 1:cout<<"monday"<<endl;break;
	    case 2:cout<<"tuseday"<<endl;break;
	    case 3:cout<<"星期三"<<endl;break;
		case 4:cout<<"星期四"<<endl;break;
		case 5:cout<<"星期五"<<endl;break; 
	    case 6:cout<<"星期六"<<endl;break; 
	    case 7:cout<<"星期天"<<endl;break;
	    default:cout<<"您输入的数据有误"<<endl;break;
		return 0; 
	}
}
