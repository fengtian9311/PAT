#include <bits/stdc++.h>
using namespace std;
int main(){
	string line[3];
	int left,k,c1,c2,c3,c4,c5;
	string temp;
	vector<string> data[3];
	for(int i=0;i<3;i++) getline(cin,line[i]);
	for(int i=0;i<3;i++){
		for(int j=0;j<line[i].size();j++){
			if(line[i][j]=='[') left=j;
			if(line[i][j]==']')	data[i].push_back(line[i].substr(left+1,j-left-1));
		}
	}
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>c1>>c2>>c3>>c4>>c5;
		if(c1>data[0].size()||c5>data[0].size()||c2>data[1].size()||c4>data[1].size()||c3>data[2].size()||c1<1||c2<1||c3<1||c4<1||c5<1) cout<<"Are you kidding me? @\\/@"<<endl;
		else{
			cout<<data[0][c1-1]<<'('<<data[1][c2-1]<<data[2][c3-1]<<data[1][c4-1]<<')'<<data[0][c5-1]<<endl;
		}
	}
	return 0;
}
