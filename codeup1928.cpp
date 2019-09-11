#include <cstdio>
int month[12][2]={{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int leap_year(int n){
	return (n%4==0&&n%100!=0||n%400==0);
}
int main(){
	int day1,day2;
	int n=1,y1,y2,m1,m2,d1,d2,flag;
	while(scanf("%d%d",&day1,&day2)!=EOF){
		if(day1>day2){
			int temp;
			temp = day1;
			day1 = day2;
			day2 = temp;
		}
		y1=day1/10000;
		y2=day2/10000;
		m1=day1%10000/100;
		m2=day2%10000/100;
		d1=day1%100;
		d2=day2%100;
		flag = leap_year(y1);
		while(y1!=y2||m1!=m2||d1!=d2){
			d1++;
			n++;
			if(d1==month[m1-1][leap_year(y1)]+1){
				d1=1;
				m1++;
				if(m1==13){
					m1=1;
					y1++;
					flag = leap_year(y1);
				}
			}
		}
		printf("%d\n",n); 
		n=1;		
	}
	return 0;
} 
