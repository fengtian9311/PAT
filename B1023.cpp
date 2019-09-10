#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int digit[10]={0};
    for(int i=0;i<10;i++) cin >>digit[i];
    for(int i=1;i<10;i++){
        if(digit[i]) {
            cout << i;
            digit[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        while(digit[i]) {
            cout << i;
            digit[i]--;
        }
    }
    return 0;
}
