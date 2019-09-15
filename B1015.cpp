#include<cstdio>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int l,h;
struct student{
    	char id[9];
    	int s1;
    	int s2;
    	int sum;
		int lv; 
}; 
bool cmp(struct student a,struct student b){
	if (a.lv!=b.lv) return a.lv<b.lv;
	else if(a.sum!=b.sum) return a.sum>b.sum;
	else if(a.s1!=b.s1) return a.s1>b.s1;
	else return (strcmp(a.id,b.id)<0);	
} 
int judge(int a,int b){
	if(a>=h&&b>=h) return 1;
	if(a>=h&&b<h&&b>=l) return 2;
	if(a>=l&&a<h&&b<h&&b>=l&&a>=b)  return 3;
	if(a<l||b<l) return 5;
	return 4;	
}
int main()
{
	int n;
	int count=0;
    cin>>n>>l>>h;
	struct student stu[n]; 
	for(int i=0;i<n;i++){
		cin>>stu[i].id>>stu[i].s1>>stu[i].s2;
		stu[i].sum=stu[i].s1+stu[i].s2;
		stu[i].lv=judge(stu[i].s1,stu[i].s2);
		if(stu[i].lv==5) count++;
	}
	sort(&stu[0],&stu[n],cmp);
	cout<<n-count<<endl;
	for(int i=0;i<n-count;i++){
		cout<<stu[i].id<<' '<<stu[i].s1<<' '<<stu[i].s2<<endl;
	}
	return 0;
}
