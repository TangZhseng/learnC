#include<stdio.h>
#include<math.h>
double f(double x); 
int main(){
	double x;
	scanf("%df",&x);
	printf("f(x)=%lf",f(x));
	
}
double f(double x){
	if(x<0){
		return (x+1)*(x+1)+2*x+1/x; 
	}
	else
	  return sqrt(x); 
}
