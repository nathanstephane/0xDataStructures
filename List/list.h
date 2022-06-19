#ifndef LIST_H
#define LIST_H

/*Bool typedef*/
typedef enum {
	FALSE,
	TRUE
}Bool;

/**Typedef of a list*/
typedef struct ListElement {
	int value;
	struct ListElement* next;
}ListElement, *List;


/**Prototypes*/
List newList(void);

Bool isEmpty(List l);

int sizeList(List l);

void displayList(List l);

List pushBack(List lst, int e);

List pushFront(List lst, int e);

#endif // !LIST_H
