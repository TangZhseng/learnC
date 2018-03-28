#include<stdio.h>
int main(){
	int x,i,tl=-1;
	double t=-1.0,sum=0.0;
	scanf("%d",&x);
	if(x==0){
		printf("%d",0);
	}
	for(i=1;i<=x;i++){
		t=t+2.0;
		tl=tl*-1;
		printf("%f/%d\n",t,i*tl);
		sum=sum+(i*tl)/t;
	}
	printf("%.3f",sum);
	return 0;
} 
