#include <cstdio>
#include <cmath>
int main(){
	double r1,p1,r2,p2;
	double c1,c2;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	c1=r1*r2*cos(p1+p2);
	c2=r1*r2*sin(p1+p2);
	if(c1<0&&c1>-0.01) c1=0.001;
	if(c2<0&&c2>-0.01) c2=0.001;
	if(c2>0) printf("%.2lf+%.2lfi",c1,c2);
	if(c2==0) printf("%.2lf",c1);
	if(c2<0) printf("%.2lf%.2lfi",c1,c2);
    return 0;
}
