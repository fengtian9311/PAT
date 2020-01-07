#include <bits/stdc++.h>
using namespace std;
struct node{
    int val,next_add;
}input_data[100010];
int main(){
    int firsrt_add,n,k,temp_add;
    cin>>firsrt_add>>n>>k;
    for(int i=0;i<n;i++){
        cin>>temp_add;
        cin>>input_data[temp_add].val>>input_data[temp_add].next_add;
    }
    temp_add=firsrt_add;
    int deal_add=firsrt_add;
    for(int i=0;i<n;i++){
        if(input_data[temp_add].val<0){
            swap(input_data[temp_add].val,input_data[deal_add].val);
            deal_add=input_data[deal_add].next_add;
        }
        temp_add=input_data[temp_add].next_add;
    }


    


    return 0;
}


