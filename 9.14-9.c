#include<stdio.h>
#include<string.h>
//9.14 programming work //编写一个函数，在第一个参数中查找，并返回匹配能在第二个参数中出现的字符的数量。
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
