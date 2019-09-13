#include <cstdio>
int main(){
    double out[2001]={0};
    double out_[2001]={0};
    int n1,n2,n_t;
    double f_t;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d %lf",&n_t,&f_t);
        out[n_t]+=f_t;
    }
    scanf("%d",&n2);
    double add[10][2001]={{0}};
    for(int i=0;i<n2;i++){
        scanf("%d %lf",&n_t,&f_t);
        for(int j=0;j<2001;j++){
            if(out[j]) add[i][j+n_t]+=f_t*out[j];
        }
    }
    for(int i=0;i<n2;i++){
    	for(int j=0;j<2001;j++){
    		out_[j]+= add[i][j];
		}
	}
    int count=0;
    for(int i=0;i<2001;i++){
        if(out_[i]) count++;
    }
    printf("%d",count);
    for(int i=2000;i>=0;i--){
        if(out_[i]){
            printf(" %d %0.1f",i,out_[i]);
        } 
    }
    return 0;

}
