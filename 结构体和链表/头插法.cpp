#include <stdlib.h>
#include <stdio.h>

typedef struct No_Stru {
	int no;
	struct No_Stru* next;
} No_Node, * No_Link;

// 遍历链表
void visitList(No_Link h);

// 方法1：通过返回值返回头指针（推荐）
No_Link CreateLinkList1(int n);

int main() {
	No_Link head1 = NULL;
	head1 = CreateLinkList1(5);
	visitList(head1);
	
	return 0;
}
// 方法1：头插法，返回头指针
No_Link CreateLinkList1(int n) {
	No_Link head = NULL;
	No_Link p = NULL;
	
	for (int i = 1; i <= n; i++) {
		p = (No_Link)malloc(sizeof(No_Node));
		p->no = i;                // 数据域赋值
		p->next = head;           // 新节点指向原头
		head = p;                 // 头指针指向新节点
	}
	return head;
}
// 遍历链表
void visitList(No_Link h) {
	No_Link p = h;
	int i = 1;
	
	if (h == NULL) {
		printf("链表为空！\n");
		return;
	}
	while (p != NULL) {
		printf("No:%2d, Data:%d\n", i, p->no);
		p = p->next;
		i++;
	}
}
