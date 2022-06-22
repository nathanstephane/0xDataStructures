#include <stdio.h>
#include "list.h"

int main(void) {
	List myList = newList();
	displayList(myList);
	myList = pushBack(myList, 30);
	displayList(myList); //[30]
	myList = pushFront(myList, 24); //[24] [30] 
	myList = pushBack(myList, -4); //[24] [30] [-4]
	
	displayList(myList); //[24] [30] [-4]
	

	myList = popFront(myList); // [30] [-4]
	myList = popFront(myList); // [-4]

	displayList(myList); //[-4]

	myList = popBack(myList); //

	displayList(myList); //

	

	
	return 0;
}