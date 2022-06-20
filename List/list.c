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
		printf("Nothing to display. The list is empty.");
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
/**Adds an element at the back of the list. LIFO*/
List pushBack(List lst, int e) {
	
	ListElement* le;
	le = malloc(sizeof(*le));

	if (le == NULL)
	{
		fprintf(stderr, "Error: memory allocation.\n");
		exit(EXIT_FAILURE);
	}

	le->value = e;
	le->next = NULL;

	if (isEmpty(lst))
	{
		return le; //This becomes the first element in the list.
	}

	//in case list isn't empty
	//tmp is used to iterate through lst 
	//without modifying it.

	ListElement* tmp;
	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = le;

	return lst;

}
/*=====================*/
List pushFront(List lst, int e) {
	ListElement* le = malloc(sizeof(ListElement));
	if (le == NULL)
	{
		fprintf(stderr, "Error: memory allocation.\n");
		exit(EXIT_FAILURE);
	}
	le->value = e;
	
	if (isEmpty(lst))
	{
		le->next = NULL;
		return le; //This becomes the first element in the list.
	}
	else
	{
		le->next = lst;
	}

	return le;
	
}
/*=====================*/
List popBack(List lst) {
	if (isEmpty(lst)) { return NULL; }

	if (lst->next == NULL) 
	{
		free(lst);
		lst = NULL;
		return	NULL;
	}

	ListElement* tmp = lst;
	ListElement* beforeLast = lst;

	while (tmp->next != NULL)
	{
		beforeLast = tmp;
		tmp = tmp->next;
	}

	beforeLast->next = NULL;
	free(tmp);
	tmp = NULL;

	return lst;
	

}
/*=====================*/

/*=====================*/