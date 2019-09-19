#include <cstdio>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0; 
    char name[6],max_name[6],min_name[6];
    char date[12],upper_bound[12]="2014/09/06",lower_bound[12]="1814/09/06",max_old[12]="2014/09/07",min_old[12]="1814/09/05";
    for(int i=0;i<n;i++){
        scanf("%s %s",&name,&date);
        if(strcmp(date,upper_bound)<=0&&strcmp(date,lower_bound)>=0){
            count++;
            if(strcmp(date,max_old)<0){
                strcpy(max_old,date);
                strcpy(max_name,name);
            }
            if(strcmp(date,min_old)>0){
                strcpy(min_old,date);
                strcpy(min_name,name);
            }
        }
    }
    if(count) printf("%d %s %s",count,max_name,min_name);
    else printf("%d",count);
    return 0;
}
