#include <cstdio>
#include <iostream>
using namespace std; 
int main(){
    bool judge[128]={0};
    char c;
    char in1[1000001];
    char in2[1000001];
    cin.getline(in1,1000001);
    cin.getline(in2,1000001);
    int i=0;
    while(in2[i]) judge[in2[i++]]=1;
    i=0;
    while(in1[i]) judge[in1[i++]]=1;
    i=0;
    while(in1[i]) {
        if(judge[in1[i]]){
            printf("%c",in1[i]);
            judge[in1[i]]=0;
        }
        i++;
    }
    i=0;
    while(in2[i]) {
        if(judge[in2[i]]){
            printf("%c",in2[i]);
            judge[in2[i]]=0;
        }
        i++;
    }
    return 0;
}
