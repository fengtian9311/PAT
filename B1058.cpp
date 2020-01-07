#include <bits/stdc++.h>
using namespace std;
int tot_num[110];
int tot_score[1010];
int tot_wrong[110];
string answer[110];
int main(){
    int n,m;
    cin>>n>>m;
    int temp1,temp2;
    string s;
    for(int i=0;i<m;i++){
        cin>>tot_num[i]>>temp1>>temp2;
        while(temp2--) {
            cin>>s;
            answer[i]+=s;
        }
    }
    cin.ignore();
    string line;
    for(int i=0;i<n;i++){
        getline(cin,line);
        for(auto &c:line)
            if(c=='('||c==')') c=' ';
        stringstream ss(line);
        int n;
        for(int j=0;j<m;j++){
            ss>>n;
            string temp_answer,temp;
            while(n--){
                ss>>temp;
                temp_answer+=temp;
            }
            if(temp_answer==answer[j]){
                tot_score[i]+=tot_num[j];
            }
            else{
                tot_wrong[j]++;
            } 
        }
    }
    int max_wrong=-1;
    for(int i=0;i<m;i++){
        if(tot_wrong[i]>max_wrong) max_wrong=tot_wrong[i];
    }
    for(int i=0;i<n;i++) cout<<tot_score[i]<<endl;
    if(max_wrong==0) cout<<"Too simple";
    else{
        cout<<max_wrong;
        for(int i=0;i<m;i++){
            if(tot_wrong[i]==max_wrong) cout<<" "<<i+1;
        }  
    }
    return 0;
} 