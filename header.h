#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>

/*.............Function & Structure Declaratio.........*/
typedef struct list
{
	char *name;
	struct list* next;
}LIST;

void _Menu();
char *Getstring(void);
LIST* Insert( LIST*);
void Print(LIST*);
LIST* Free(LIST*);
LIST* FindMid(LIST*);
