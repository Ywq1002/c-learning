#include <stdlib.h>
#include <stdio.h>

typedef struct No_Stru {
	int no;
	struct No_Stru* next;
} No_Node, * No_Link;

// 遍历链表
void visitList(No_Link h);

//不带头结点的尾插法，返回头指针
No_Link CreateLinkList2(int n);

int main() {
	No_Link head2 = NULL;
	
	
	printf("\n不带头结点的尾插法创建链表：\n");
	head2 = CreateLinkList2(5);
	visitList(head2);
	
	return 0;
}

No_Link CreateLinkList2(int n){
	No_Link p=NULL,head=NULL,tail=NULL;
	for(int i=1;i<=n;i++){
		p=(No_Link)malloc(sizeof(No_Node));//TODO
		p->no=i;
	
		 if(head==NULL){
			head=tail=p;
		 }else {
		tail->next=p;
			 tail=p;
		 }
	}	tail->next=NULL;
	return head;
}

// 遍历链表
void visitList(No_Link h) {
	No_Link p = h;
	int i = 1;
	
	while (p != NULL) {
		printf("No:%2d, Data:%d\n", i, p->no);
		p = p->next;
		i++;
	}
}
