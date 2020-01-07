#include<bits/stdc++.h>
using namespace std;
struct Question{
    int max_score,opting,right_opting;
    bool answer[5];
}question[110];
double stuend_scoce[1010];
int wrong_answer[110][5];
int main(){
    int n,m; //n学生数 m题数
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>question[i].max_score>>question[i].opting>>question[i].right_opting;
        char c;
        for(int j=0;j<question[i].right_opting;j++) {
            cin>>c;
            question[i].answer[c-'a']=1;
        }
    }
    cin.ignore();
    string line;
    for (int i = 0; i < n; i++){
        getline(cin,line);
        for(auto &c:line)
            if(c=='('||c==')') c=' ';
        stringstream ss(line);
        int temp;
        char c;
        for(int j=0;j<m;j++){
            ss>>temp;
            bool answer[5]={0};
            while(temp--){
                ss>>c;
                answer[c-'a']=1;
            }
            int type=0;  //0全对，1半对，2零分；
            for(int k=0;k<question[j].opting;k++){
                if(answer[k]!=question[j].answer[k]){
                    wrong_answer[j][k]++;
                    if(answer[k]==1&&question[j].answer[k]==0){
                        type=2;
                    }
                    if(answer[k]==0&&question[j].answer[k]==1&&type!=2){
                        type=1;
                    }
                }
            }
            if(type==0) stuend_scoce[i]+=question[j].max_score;
            if(type==1) stuend_scoce[i]+=0.5*question[j].max_score;
        }
    }
    int max_wrong=-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<question[i].opting;j++){
            if (wrong_answer[i][j]>max_wrong) max_wrong=wrong_answer[i][j];
        }
    }
    for(int i=0;i<n;i++) cout<<fixed<<setprecision(1)<<stuend_scoce[i]<<endl;
    if(max_wrong==0) cout<<"Too simple";
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<question[i].opting;j++){
                char c='a'+j;
                if (wrong_answer[i][j]==max_wrong) cout<<max_wrong<<' '<<i+1<<'-'<<c<<endl;
            }
        }
    }
    return 0;
}