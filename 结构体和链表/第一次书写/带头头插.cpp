#include<stdio.h>
#include<stdlib.h>
typedef struct No_Stru{
	int no;
	struct No_Stru* next;
	
}No_node,*No_Link;

No_Link creatlinklist(int n);
void visitList(No_Link head);

No_Link creatlinklist(int n){
	No_Link head=(No_Link)malloc(sizeof(No_node));
	head->no=0;
	head->next=NULL;
	for(int i=1;i<=n;i++){
		No_Link p=(No_Link)malloc(sizeof(No_node));
		p->no=i;
		p->next=head->next;
		head->next=p;
	}
	return head;
}

void visitList(No_Link head){
	if(head==NULL){
		printf("链表不存在");//TODO
		return;
	}
	No_Link p=head->next;
	int i=1;
	if(p==NULL){
		printf("链表为空");//TODO
		return;
	}
	while(p!=NULL){
		printf("No:%2d,Data:%d\n",i++,p->no);
		p=p->next;
	}
}
int main(){
	No_Link h1=NULL;
	h1=creatlinklist(5);
	visitList(h1);
	return 0;
}
