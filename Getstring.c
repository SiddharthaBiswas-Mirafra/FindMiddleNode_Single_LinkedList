#include"header.h"
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

