#include"header.h"
LIST* FindMid(LIST* head)
{
	if(head==NULL)
	{
		puts("The list is empty.....");
		return head;
	}
	if(head->next==NULL || head->next->next==NULL)
	{
		puts("Middle node not found....");
		return head;
	}
	LIST *sp,*fp,*prev;
	sp=fp=head;
	while(fp!=NULL && (fp->next)!=NULL)
	{
		prev=sp;
		sp=sp->next;
		fp=fp->next->next;
	}

	if(fp==NULL)
	{
		printf("\nThe Middle node info is:\n%s\n%s\n\n",prev->name,sp->name);
		return head;
	}

	if(fp->next==NULL)
	{
		printf("\nThe Middle node info is: %s\n\n",sp->name);
		return head;

	}




}

