#include"quques.h"
int main(){
	quep q=creat();
	addq(q,5);
	addq(q,8);
	addq(q,9);
	addq(q,6);
	addq(q,7);
	addq(q,10);
	addq(q,11);
	pop(q);
	addq(q,5);
	pop(q);
	pop(q);
	pop(q);
	pop(q);
}
