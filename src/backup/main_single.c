#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./c1.h"
#include "./c2.h"

struct stu
{
int iScore;
char cName[10];
struct stu* pNext;
};

int main()
{
	struct stu stu_temp;
	struct stu* pHead = NULL;

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

	//temp指向NEW
	pHead = &stu_temp;
	stu_temp.iScore = -1;
	stu_temp.pNext = stu_new;
	
	while (scanf("%d", &stu_new->iScore)&&stu_new->iScore != -1)
	{
		scanf("%s", stu_new->cName);
		stu_end = stu_new;
		stu_new = (struct stu*)malloc(sizeof(struct stu));
		stu_end->pNext= stu_new;
	}
	stu_end->pNext = NULL;
	free(stu_new);

	while (pHead != NULL)
	{
		if (pHead->iScore == -1)
		{
			pHead = pHead->pNext;
			continue;
		}
		
		printf("%d %s\n", pHead->iScore,  pHead->cName);
		pHead =  pHead->pNext;
	}
	
    return 0;
}
