#ifndef DLINKEDLIST
#define DLINKEDLIST

/*Bool typedef*/
typedef enum {
	FALSE,
	TRUE
}Bool;

/*DList struct definition*/
typedef struct DListNode {
	int value;
	struct DListNode* back;
	struct DListNode* next;


}DListNode;

typedef struct DList {
	int length;
	struct DListNode* begin;
	struct DListNode* end;

}*DList;


#endif // !DLINKEDLIST