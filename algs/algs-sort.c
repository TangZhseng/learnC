#include<stdio.h>
void swap(int a,int b){
	int t;
	a=t;
	a=b;
	b=t;
}
void bubble_sort(int a[],int ac){//ц╟ещеепР 
	int i,j;
	int sign;
	for(i=0;i<ac;i++){
		sign=0;
		for(j=i;j<ac-1;j++){
			if(a[j+1]>a[j]){
				swap(a[j],a[j+1]);
				sign=1
			}
		}
		if(sign==0){
			break:
		}
	}
} 
