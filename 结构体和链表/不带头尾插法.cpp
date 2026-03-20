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
//不带头结点的尾插法，返回头指针
No_Link CreateLinkList2(int n) {
	No_Link head = NULL;      // 头指针
	No_Link tail = NULL;      // 尾指针
	No_Link p = NULL;         // 新节点指针
	
	for (int i = 1; i <= n; i++) {
		// 创建新节点
		p = (No_Link)malloc(sizeof(No_Node));
		p->no = i;                // 数据域赋值
		p->next = NULL;           // 新节点next设为NULL
		
		if (head == NULL) {
			// 第一个节点，同时作为头和尾
			head = p;
			tail = p;
		} else {
			// 后续节点，链接到尾部
			tail->next = p;
			tail = p;            // 更新尾指针
		}
	}
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
