#include"header.h"

/*.............Main Function Definition.........*/
int main()
{
	struct LIST *head=NULL;
	int input;
	while(1)
	{
		_Menu();
		__fpurge(stdin);
		scanf("%d",&input);
		switch(input)
		{
			case 1:head=Insert(head);break;
			case 2:Print(head);break;
			case 3:head=FindMid(head);break;
			case 4:head=Free(head);return 0;
			default:puts("Invalid choice....");
		}
	}

}

/*.............Menu Function Definition.........*/

void _Menu(void)
{
	printf("1. Input\n2. Print\n3. Reverse\n4. Exit\n");
	puts("Enter Your choce: ");
	return;
}

/*.............Insert Function Definition.........*/
struct LIST* Insert(struct LIST *head)
{
	struct LIST* new=NULL,*temp=NULL;
	new=(struct LIST*)calloc(1,sizeof(*new));
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


/*.............Print Function Definition.........*/

void Print(struct LIST* head)
{
	if(head==NULL)
	{
		puts("The list is empty.....");
		return;
	}
	puts("...........................................");
	while(head)
	{
		puts(head->name);
		head=head->next;
	}
	puts("...........................................");
	return;

}

/*.............Getstring Function Definition.........*/

char *Getstring(void)
{
	char *p=NULL;
	int i=0;
	do
	{
		p=(char*)realloc(p,(i+1)*sizeof(char));
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[--i]='\0';
	return p;
}

/*.............Reverese Function Definition.........*/

struct LIST* FindMid(struct LIST* head)
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
	struct LIST *sp,*fp,*prev;
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

/*.............Free Function Definition.........*/
struct LIST* Free(struct LIST* head)
{
	struct LIST* temp;
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
