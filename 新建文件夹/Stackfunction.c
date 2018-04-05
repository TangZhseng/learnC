#include"Stack.h"
struct stack {
	BT* pt;
	int Maxsize;
	int top;
};
Stack* CreateStack(int maxsize) {
	struct stack* S;
	S = (Stack*)malloc(sizeof(Stack));
	S->pt = (BT*)malloc(10 * sizeof(BT));
	S->Maxsize = maxsize;
	S->top = -1;
	return S;
}
int IsStackfull(Stack S) {
	if (S.top == S.Maxsize - 1) {
		return 1;
	}
	else
		return 0;
}
int IsStackempt(Stack S) {
	if (S.top == -1) {
		return 1;
	}
	else
		return 0;
}
void Push(Stack *Ps, BT tr) {
	if (IsStackfull(*Ps)) {
		printf("error,Stack is full\n");
	}
	else {
		Ps->top = Ps->top + 1;
		Ps->pt[Ps->top] = tr;
	}
}
BT Pop(Stack* Ps) {
	BT tmp;
	if (IsStackempt(*Ps)) {
		printf("error,the Stack is empty\n");
		return NULL;
	}
	else {
		tmp = Ps->pt[Ps->top];
		Ps->pt[Ps->top] = NULL;
		Ps->top = Ps->top - 1;
		return tmp;
	}
}
void InoderTravel(BT tr, Stack* S) {
	Push(S, tr);
	while (tr != NULL &&S->top != -1) {
		while (tr->lf != NULL) {
			Push(S, tr->lf);
			tr = tr->lf;
		}
		tr = Pop(S);
		printf("%d\n",tr->data);
		if(tr->ri!=NULL){
			tr = tr->ri;
			Push(S, tr);
	}
	}
}