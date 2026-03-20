#include <stdlib.h>
#include <stdio.h>

typedef struct No_Stru {
	int no;
	struct No_Stru* next;
} No_Node, * No_Link;

// 遍历链表（带头结点）
void visitList(No_Link h);

// 方法1：通过返回值返回头指针（带头结点的头插法）
No_Link CreateLinkList1(int n);

int main() {
	No_Link head1 = NULL;
	head1 = CreateLinkList1(5);  // 创建带头结点的链表
	visitList(head1);            // 遍历链表
	
	// 注意：需要释放内存，这里省略了free函数
	return 0;
}

// 方法1：带头结点的头插法，返回头指针
No_Link CreateLinkList1(int n) {
	// 1. 创建头结点（不存储有效数据）
	No_Link head = (No_Link)malloc(sizeof(No_Node));
	head->next = NULL;    // 初始为空链表
	head->no = 0;         // 头结点的数据域可以存放链表长度或其他信息
	
	// 2. 头插法插入数据节点
	for (int i = 1; i <= n; i++) {
		No_Link p = (No_Link)malloc(sizeof(No_Node));
		p->no = i;                // 数据域赋值
		
		// 头插法核心：插入到头结点之后
		p->next = head->next;     // 新节点指向原第一个数据节点
		head->next = p;           // 头结点指向新节点
	}
	
	return head;                  // 返回头结点指针
}

// 遍历链表（带头结点版本）
void visitList(No_Link h) {
	// h 是头指针，指向头节点
	No_Link p = h->next;  // 跳过头节点，从第一个数据节点开始
	int i = 1;
	
	if (p == NULL) {
		printf("链表为空！\n");
		return;
	}
	
	printf("链表遍历结果：\n");
	while (p != NULL) {
		printf("No:%2d, Data:%d\n", i, p->no);
		p = p->next;
		i++;
	}
}
