#include"Quetree.h"
struct que{
		BT tp;
		struct que* nt;
};
struct qt{
		struct que* front;
		struct que* rear;
};
Qt creatque(void){
		Qt t;
		t=(Qt)malloc(sizeof(QT));
		t->front=NULL;
		t->rear=NULL;
		return t;
};
void quepush(Qt t,BT tr){
		Pq tmp=(Pq)malloc(sizeof(Que));
		tmp->tp=tr;
		tmp->nt=NULL;
		if(t->front==t->rear&&t->front==NULL){
            t->front=tmp;
			t->rear=t->front;
		}
		else
				t->front->nt=tmp;
		        t->front=tmp;
		        
};
BT quepop(Qt t){
	BT tmp=NULL;
	Pq tm=NULL;
   	if(t->front==NULL){
				printf("error,que is empty");
				return NULL;
		}
	else if(t->front==t->rear&&t->front!=NULL){
			tmp=t->rear->tp;
				free(t->rear);
				t->rear=NULL;
				t->front=NULL;
				return tmp;
		}		
	else 
	        tm=t->rear;
	        tmp=t->rear->tp;
	        t->rear=t->rear->nt;
	        free(tm);
	        return tmp;
};
void inodertravel(BT tr){
		BT tmp=NULL;
		Qt t=creatque();
        quepush(t,tr);
		while(t->front!=NULL){
			tmp=quepop(t);
			printf("%d ",tmp->data);
			if(tmp->lf!=NULL){
					quepush(t,tmp->lf);
			}
			if(tmp->ri!=NULL){
					quepush(t,tmp->ri);
			}
		} 
};
