#include<stdio.h>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
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

void insert_sort(int a[],int ac){
	int i,j;
	for(i=1;i<ac;i++){
		j=i
		while(j>=1&&a[j]<a[j-1]){
			swap(a[j],a[j-1]);
			j--;
		}
	}
}

void select_sort(int a[],int ac){
	int i,j;
	int sign;
	for(i=0;i<ac-1;i++){
		for(j=i+1;j<ac;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
