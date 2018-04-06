#include"biotree.h"
BT Createtree(void) {
	BT tr;
	tr = (BT)malloc(sizeof(node));
	tr->data = 1;
	tr->lf = NULL;
	tr->ri = NULL;
	return tr;
}
void Createbionode(BT tr) {
	if (tr->data < 20) {
		tr->lf = (BT)malloc(sizeof(node));
		tr->ri = (BT)malloc(sizeof(node));
		tr->lf->data = (tr->data) * 2;
		tr->ri->data = (tr->data) * 2 + 1;
		Createbionode(tr->lf);
		Createbionode(tr->ri);
	}
	else {
		tr->lf = NULL;
		tr->ri = NULL;
		printf("success\n");
	}
}
void Traveltree(BT tr){
	if (tr!=NULL) {
		printf("%d\n", tr->data);
		Traveltree(tr->lf);
		Traveltree(tr->ri);
	}
}
int Isemptytree(BT tr) {
	if (tr->lf == NULL && tr->ri == NULL) {
		return 1;
	}
	else
		return 0;
}