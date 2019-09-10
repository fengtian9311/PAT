# include <cstdio>
# include <iostream>
using namespace std;
int main(){
    int number;
    int n1,n2,n3,tem;
    cin >> number;
    n1=number/100;
    n2=number/10%10;
    n3=number%10;
    tem = n3+1;
    while(n1) {
        cout << "B";
        n1--;
    }
    while(n2) {
        cout << "S";
        n2--;
    }
    while(n3) {
        cout << tem-n3;
        n3--;
    }
return 0;
}
