#include<stdio.h>
int main(){
	int i,t=-1;
	double x=0.0;
	for(i=1;i<=7;i=i+3){
		t=t*-1;
		printf("i=%.3f\n",1.0/i*t);
		x=1.0/i*t+x;
	}
	printf("x=%.3f",x);
	return 0;
} 
