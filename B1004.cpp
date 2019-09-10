#include <cstdio>
#include <iostream>
using namespace std;

struct studnt
{
	char name[11] ;
	char id[11];
	int score;
};
int main(){
	int n;
	cin>>n;
	struct studnt s[n];  
	for(int i=0;i<n;i++)
	{
		cin>>s[i].name>>s[i].id>>s[i].score;
	}
	int max=s[0].score;
	int min=s[0].score;
	int num_max=0;
	int num_min=0;
	for(int i=0;i<n;i++){
		if(s[i].score>max) num_max=i,max=s[i].score;
		if(s[i].score<min) num_min=i,min=s[i].score;
	}
	cout<<s[num_max].name<<' '<<s[num_max].id<<endl;
	cout<<s[num_min].name<<' '<<s[num_min].id<<endl;
	
	
	
	return 0;
}
