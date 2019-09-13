#include <cstdio>
int main(){
    double out[1001]={0};
    int n1,n2,n_t;
    double f_t;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d %lf",&n_t,&f_t);
        out[n_t]+=f_t;
    }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d %lf",&n_t,&f_t);
        out[n_t]+=f_t;
    }
    int count=0;
    for(int i=0;i<1001;i++){
        if(out[i]) count++;
    }
    printf("%d",count);
    for(int i=1000;i>=0;i--){
        if(out[i]){
            printf(" %d %0.1f",i,out[i]);
        } 
    }
    return 0;

}
