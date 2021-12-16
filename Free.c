#include"header.h"
LIST* Free(LIST* head)
{
	LIST* temp;
	if(head==NULL)
	{
		puts("The list is empty.....");
		return head;
	}
	while(head)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	return head;

}
