#include<stdio.h>
int main(){
    int i,x,min=0;
	scanf("%d",&i);
	for(;i>0;i--){
		scanf("%d",&x);
		if(x<min){
			min=x;
		}
	}
	printf("min=%d",min);
	return 0;	
} 
