#include<stdio.h>
int fact(int n);
double C(int m ,int n);
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("C=%lf",C(m,n));
    


}
int fact(int n){
	if(n==1){
	  return 1;
	}
	else
	  return fact(n-1)*n;
	  
}
double C(int m ,int n){
	return ((double)fact(n))/(fact(m)*fact(n-m));
}
