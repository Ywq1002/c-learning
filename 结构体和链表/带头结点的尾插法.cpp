#include <stdlib.h>
#include <stdio.h>

typedef struct No_Stru {
	int no;
	struct No_Stru* next;
} No_Node, * No_Link;

// 遍历链表
void visitList(No_Link h);

// 带头结点的尾插法，返回头指针
No_Link CreateLinkList2(int n);

int main() {
	No_Link head2 = NULL;
	
	printf("带头结点的尾插法创建链表：\n");
	head2 = CreateLinkList2(5);
	visitList(head2);
	
	return 0;
}

// 带头结点的尾插法，返回头指针
No_Link CreateLinkList2(int n) {
	// 1. 创建头结点（不存储数据）
	No_Link head = (No_Link)malloc(sizeof(No_Node));
	head->next = NULL;  // 头结点初始时next为NULL
	head->no=0;
	No_Link tail = head;  // 尾指针初始指向头结点
	
	for (int i = 1; i <= n; i++) {
		// 创建新节点
	No_Link	p = (No_Link)malloc(sizeof(No_Node));
		p->no = i;
		// 统一操作：直接链接到尾部
		tail->next = p;  // 连接到尾部
		tail = p;        // 更新尾指针
	}
	tail->next = NULL;
	return head;  // 返回头结点指针
}

// 遍历链表
void visitList(No_Link h) {
	// 1. 检查链表是否存在
	if (h == NULL) {
		printf("错误：链表指针为NULL\n");
		return;
	}
	
	// 2. 跳过头结点，开始遍历
	No_Link p = h->next;
	int i = 1;
	
	// 3. 遍历所有数据节点
	if (p == NULL) {
		printf("链表为空（只有头结点）\n");
		return;
	}
	
	while (p != NULL) {
		printf("No:%2d, Data:%d\n", i, p->no);
		p = p->next;
		i++;
	}
	
	printf("遍历完成，共%d个节点\n", i-1);
}
