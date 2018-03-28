#include<stdio.h>
int jie(int s);
int main(){
	double su=1.0;
	int x,i;
	scanf("%d",x);
	for(i=0;i<=x;i++){
		su=su+1.0/jie(i);
	}
	printf("%6f",su);
	return 0;
} 
int jie(int s){
	int sum=1,i;
	for(i=0;i<=s;i++){
		sum=i*sum;
	}
	return sum;
}
