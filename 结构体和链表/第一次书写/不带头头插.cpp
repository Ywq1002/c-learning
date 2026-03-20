#include<stdio.h>
#include<stdlib.h>
typedef struct No_stru{
	int no;
	struct No_stru* next;
}No_Node,*No_Link;
No_Link createLinklist(int n);
void visitList(No_Link head);

No_Link createLinklist(int n){
	No_Link head=NULL;
	No_Link p=NULL;
	for(int i=1;i<=n;i++){
	    p=(No_Link)malloc(sizeof(No_Node));
		p->no=i;
		p->next=head;
		head=p;
	}
	return head;
}

void visitList(No_Link head){
	No_Link p=head;
	int i=1;
	if(p==NULL){
		printf("空链表\n");
		return;
	}
	while(p!=NULL){
		printf("No:%2d, data:%d",i++,p->no);
		p=p->next;
	}
}

int main(){
	No_Link h1=NULL;
	h1= createLinklist(5);
	visitList(h1);
	
	return 0;
}
