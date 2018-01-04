#include<stdio.h>
#include<string.h>
//9.14 programming work
int count_chars(char const *str,char const*chars){
	int i=0;
	const char *ip=str,*op=chars;
	while(*ip!='\0'){
		for(op=chars;*op!='\0';op++){
			if(*ip==*op){
				i++;
			}
		}
		ip++;
	}
	return i;
}
main(){
	printf("%d",count_chars("aaaa","abcd"));
}
