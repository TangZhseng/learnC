#include<stdio.h>
int main(){
	double x,z,y=1.0,sum=0.0;
	int t=-1;
	scanf("%lf",&x);
	printf("%lf\n",x);
	do{
		z=1.0/y;
		printf("z=%lf",z);
		t=t*-1.0;
		sum=sum+t*z;
		printf("sum=%lf",sum);
		y=y+3.0;
	}while(z>x);
	printf("%6f",sum);
	return 0;
}
