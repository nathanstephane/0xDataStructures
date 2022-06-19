#include <stdio.h>
#include "list.h"

int main(void) {
	List myList = newList();
	if (isEmpty(myList))
	{
		printf("Empty List.\n");
	}
	else {
		printf("List contains elements");
	}

	displayList(myList);
	return 0;
}