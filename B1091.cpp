#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    for(int i=0;i<n;i++){
        int temp=input[i];
        int mod=1;
        bool flag=0;
        while(temp){
            temp/=10;
            mod*=10;
        }
        for(int j=1;j<10;j++){
            if(j*input[i]*input[i]%mod==input[i]){
            	printf("%d %d\n",j,j*input[i]*input[i]);
            	flag=1;
            	break;
			}
        }
        if(!flag) printf("No\n");
    }
    return 0;
}
