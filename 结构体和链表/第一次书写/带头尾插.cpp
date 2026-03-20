#include<stdio.h>
#include<stdlib.h>

typedef struct No_Stru{
	int no;
	struct No_Stru* next;
}No_Node,*No_Link;

No_Link createLinkList(int n);
void visitList(No_Link head);

No_Link createLinkList(int n){
	No_Link head=(No_Link)malloc(sizeof(No_Node));
	head->no=0;
	head->next=NULL;
	No_Link tail=head;
	for(int i=1;i<=n;i++){
		No_Link p=(No_Link)malloc(sizeof(No_Node));
		p->no=i;
		tail->next=p;
		tail=p;
	}
	tail->next=NULL;
	return head;
}

void visitList(No_Link head){
	if(head==NULL){
	   printf("错误：链表指针为NULL\n");
		return;
	}
	No_Link p=head->next;
	int i=1;
	if(p==NULL){
	printf("链表为空（只有头结点）\n");
		return;
	}
	while(p!=NULL){
		printf("No:%2d,Data:%d\n",i++,p->no);
		p=p->next;
	}
	
}
int main() {
	No_Link head2 = NULL;
	
	printf("带头结点的尾插法创建链表：\n");
	head2 = createLinkList(5);
	visitList(head2);
	
	return 0;
}
