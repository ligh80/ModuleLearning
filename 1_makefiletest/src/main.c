#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./c1.h"
#include "./c2.h"

struct stu
{
	int iScore;
	char cName[10];
	struct stu* pBefo;
	struct stu* pNext;
};

int main()
{
	struct stu* pTemp = NULL;
	//pTemp用作顺序打印和倒序打印链表时用到的临时指针
	struct stu* pHead = NULL;
	//定义pHead用来指向队首结点
	struct stu* pEnd = NULL;


	// struct stu stu1;
	// stu1.iScore = 89;
	// strcpy(stu1.cName,"log");
	// stu1.pNext = NULL;
    
    // struct stu stu2;
	// stu2.iScore = 99;
	// strcpy(stu2.cName, "rog");
	// stu2.pNext = NULL;

	struct stu* stu_new = (struct stu*)malloc(sizeof(struct stu));
	struct stu* stu_end = NULL;

	pHead = stu_new;
	
	while (scanf("%d", &stu_new->iScore)&&stu_new->iScore != -1)
	{
		scanf("%s", stu_new->cName);
		stu_end = stu_new;
		stu_new = (struct stu*)malloc(sizeof(struct stu));
		stu_end->pNext = stu_new;
		stu_new->pBefo = stu_end;
	}

	stu_end->pNext = NULL;
	free(stu_new);
	pEnd = stu_end;

	printf("顺序结果打印:\n");
	pTemp = pHead;
	while (pTemp != NULL)
	{
		printf("%d %s\n", pTemp->iScore,  pTemp->cName);
		pTemp = pTemp->pNext;
	}

	printf("倒序结果打印:\n");
	pTemp = pEnd;
	while (pTemp != NULL)
	{
		printf("%d %s\n", pTemp->iScore,  pTemp->cName);
		pTemp = pTemp->pBefo;
	}
	
    return 0;
}
