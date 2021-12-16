#include"header.h"


int main()
{
	LIST *head=NULL;
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

