#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	char num[100]={0};
	int sum=0;
	int digit[3]={0};
	int n =0;
	cin>>num;
	for(int i=0;i<100;i++)
	{
		if(num[i]>='0'&num[i]<='9') sum+=num[i]-'0';
	} 
	while(sum)
	{
		digit[n]=sum%10;
		sum/=10;
		n++;
	}
	
	if(n==0) n++;
	
	switch(digit[--n]){
		case 0:cout<<"ling";break;
		case 1:cout<<"yi";break;
		case 2:cout<<"er";break;
		case 3:cout<<"san";break;
		case 4:cout<<"si";break;
		case 5:cout<<"wu";break;
		case 6:cout<<"liu";break;
		case 7:cout<<"qi";break;
		case 8:cout<<"ba";break;
		case 9:cout<<"jiu";break;	
	}
	
	while(n){
		switch(digit[--n])
		{
			case 0:cout<<" ling";break;
			case 1:cout<<" yi";break;
			case 2:cout<<" er";break;
			case 3:cout<<" san";break;
			case 4:cout<<" si";break;
			case 5:cout<<" wu";break;
			case 6:cout<<" liu";break;
			case 7:cout<<" qi";break;
			case 8:cout<<" ba";break;
			case 9:cout<<" jiu";break;	
		}
		
	}
	return 0;
}
