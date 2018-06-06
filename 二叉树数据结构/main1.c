#include"Quetree.h"
#include"biotree.h"
int main() {
	BT tr;
	tr = (BT)malloc(sizeof(node));
	tr->data = 1;
	Createbionode(tr);
	Traveltree(tr);
	printf("\n");
	inodertravel(tr);
	getchar();	
}
