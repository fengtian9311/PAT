#include <iostream>
#include <string.h>
using namespace std;
int judge(char input[]){
    if(strlen(input)<6) return 1;
    for(int i=0;i<strlen(input);i++){
        if(input[i]!='.'&&!(input[i]>='0'&&input[i]<='9')&&!(input[i]>='a'&&input[i]<='z')&&!(input[i]>='A'&&input[i]<='Z')) return 2;
    }
    bool zimu=0,shuzi=0;
    for(int i=0;i<strlen(input);i++){
        if(input[i]>='0'&&input[i]<='9'){
            shuzi=1;
            break;
        }
    }
    for(int i=0;i<strlen(input);i++){
        if((input[i]>='a'&&input[i]<='z')||(input[i]>='A'&&input[i]<='Z')){
            zimu=1;
            break;
        }
    }
    if(zimu&&!shuzi) return 3;
    if(!zimu&&shuzi) return 4;
    return 0;
}
int main(){
    char output[5][30]={"Your password is wan mei.","Your password is tai duan le.","Your password is tai luan le.","Your password needs shu zi.","Your password needs zi mu."}; 
    int n;
    cin>>n;
    getchar();
    int out[n];
    char input[90];
    for(int i=0;i<n;i++){
        cin.getline(input,90);
        out[i]=judge(input);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",output[out[i]]);
    }
    return 0;
}
