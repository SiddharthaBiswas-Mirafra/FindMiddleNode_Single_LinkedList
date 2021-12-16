#include"header.h"
LIST* Insert(LIST *head)
{
	LIST* new=NULL,*temp=NULL;
	new=(LIST*)calloc(1,sizeof(*new));
	printf("Enter name: ");
		__fpurge(stdin);
	new->name=Getstring();
	if(head==NULL)
		head=new;
	else
	{
		temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new;
	}
	return head;
}


