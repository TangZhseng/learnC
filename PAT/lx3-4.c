#include<stdio.h>
int main(){
	char c[10];
	int i,di=0,bl=0,ot=0,le=0;
	for(i=0;i<10;i++){
		c[i]=getchar();
	}
	for(i=0;i<10;i++){
		if(c[i]>='0'&&c[i]<='9'){
			di++;
		}
		else if(c[i]=='\n'||c[i]==' '){
			bl++;
		}
		else if(c[i]>='A'&&c[i]<='z'){
			le++;
		}
		else 
		   ot++;
	}
	printf("le=%d,bl=%d,di=%d,ot=%d",le,bl,di,ot);
	return 0;
} 
