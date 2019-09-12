#include <cstdio>
char judge(int win[]){
    if(win[2]>=win[1]&&win[2]>=win[0]) return 'B';
    else if(win[0]>=win[1]&&win[0]>=win[2]) return 'C';
    return 'J';
}
int main(){
    int n;
    int st1[3]={0},st2[3]={0};
    int win1[3]={0},win2[3]={0};
    char a,b;
    scanf("%d",&n);
    getchar();
    while(n--){
        a=getchar();
        getchar();
        b=getchar();
        getchar();
        if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')){
            st1[0]++;
            st2[2]++;
            switch(a){
                case 'C':win1[0]++;break;
                case 'J':win1[1]++;break;
                case 'B':win1[2]++;break;
            }
        }
        else if(a==b){
            st1[1]++;
            st2[1]++;
        }
        else {
            st1[2]++;
            st2[0]++;
            switch(b){
                case 'C':win2[0]++;break;
                case 'J':win2[1]++;break;
                case 'B':win2[2]++;break;
            }
        }
    }
    printf("%d %d %d\n",st1[0],st1[1],st1[2]);
    printf("%d %d %d\n",st2[0],st2[1],st2[2]);
    printf("%c %c",judge(win1),judge(win2));
    return 0;
}
