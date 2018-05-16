#include"biotree.h"
#include"Stack.h"
int main() {
	BT tr;
	Stack *l;
	tr = (BT)malloc(sizeof(node));
	tr->data = 1;
	Createbionode(tr);
	l = CreateStack(10);
	Traveltree(tr);
	InoderTravel(tr,l);
	getchar();
}
