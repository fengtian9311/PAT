#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int student,number;
	cin>>student>>number;
	int score[number];
	int rihgt_anwer[number];
	int st[number]={0};
	for(int i=0;i<number;i++) cin>>score[i];
	for(int i=0;i<number;i++) cin>>rihgt_anwer[i];
	int anwer[student][number];
	for(int i=0;i<student;i++){
		for(int j=0;j<number;j++) cin>>anwer[i][j];
	}
	
	for(int i=0;i<student;i++){
		for(int j=0;j<number;j++){
			if(anwer[i][j]==rihgt_anwer[j]) st[i]+=score[j];
		}
	}
	for(int i =0;i<student;i++)	cout<<st[i]<<endl;
    return 0;
}
