#include <stdlib.h>
#include <stdio.h>
#include "list.h"

List newList(void) {
	return NULL;
}

/*=====================*/
Bool isEmpty(List l) {
	if (l == NULL)
	{
		return TRUE;
	}
	return FALSE;
}

/*=====================*/

int sizeList(List l) {
	int size = 0;

	if (!isEmpty(l))
	{
		++size;
		l = l->next;
	}
	return size;
}

/*=====================*/
void displayList(List l) {
	if (isEmpty(l))
	{
		printf("Empty List");
		return;
	}

	while (l != NULL)
	{
		int beforelast=1;
		if (beforelast == sizeList(l) - 1 || beforelast == 1)
		{
			printf("[%d]", l->value);

		}
		else
		{
			printf("[%d]->", l->value);
		}
		
		beforelast++;
		l = l->next;

	}
}
/*=====================*/

/*=====================*/

/*=====================*/

/*=====================*/

/*=====================*/