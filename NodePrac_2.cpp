#include <stdio.h>
#include <malloc.h>

typedef struct Node {
	int data;
	struct Node *next;
	Node(int _data) : data(_data), next(NULL) {};
	Node() : data(0), next(NULL) {};
} Node;

typedef struct List {
	int size;
	Node *front;
	Node *back;
	List() : size(0), front(NULL), back(NULL) {};
};

void setNode(Node *curNode, int data)
{
	curNode->data = data;
}

void next(Node* &curNode)
{
	curNode = curNode->next;
}

void pushBack(List &list, int data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;

	if (list.size == 0)
	{
		list.front = newNode;
		list.back = newNode;
	}
	else
	{
		list.back->next = newNode;
		list.back = newNode;
	}

	list.size++;
}

void pushFront(List &list, int data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;

	if (list.size == 0)
	{
		list.front = newNode;
		list.back = newNode;
	}
	else
	{
		newNode->next = list.front;
		list.front = newNode;
	}

	list.size++;
}

void popFront(List &list)
{
	printf("pop");
	printf("pop");
	
	if (list.size == 1)
	{
		free(list.front);
		list.front = NULL;
		list.back = NULL;
	}
	else
	{
		Node *temp = list.front;
		list.front = list.front->next;
		free(temp);
	}

	list.size--;
}

void popBack(List &list)
{
	printf("pop");
	
	if (list.size == 1)
	{
		free(list.back);
		list.front = NULL;
		list.back = NULL;
	}
	else
	{
		Node *explNode, *prevNode = NULL;
		for (explNode = list.front; explNode->next != NULL; next(explNode)) {
			prevNode = explNode;
		}
		free(explNode);
		prevNode->next = NULL;
		list.back = prevNode;
	}

	list.size--;
}

void clear(List &list)
{
	while (list.size)
		popFront(list);
}

void delNode(List &list, Node *prevNode, Node *curNode)
{
	printf("del");
	if (prevNode == NULL)
	{
		next(curNode);
		free(list.front);
		list.front = curNode;
	}
	else
	{
		prevNode->next = curNode->next;
		free(curNode);
	}
	list.size--;
}

void insertNode(List &list, Node *curNode, int data)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = curNode->next;
	curNode->next = newNode;
	list.size++;
}

void printList(List list)
{
	for (Node *explNode = list.front; explNode != NULL; explNode = explNode->next)
	{
		printf("%d ", explNode->data);
	}
	printf("\n");
}

int main()
{
	int size = 10;
	List list;

	for (int i = 0; i < size; i++)
	{
		printf("%d >> ", i);
		pushFront(list, i);
		printList(list);
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d >> ", i);
		pushBack(list, i);
		printList(list);
	}

	printf(">> POP << \n");

	for (int i = 0; i < 4; i++)
	{
		printf("%d >> ", i);
		popFront(list);
		printList(list);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d >> ", i);
		popBack(list);
		printList(list);
	}
	int insertIdx = 6;
	int data = 11;
	int deleteIdx = 11;
	printf("insert %d after %d\n", data, insertIdx);
	for (Node *explNode = list.front; explNode != NULL; next(explNode))
	{
		if (explNode->data == insertIdx)
		{
			insertNode(list, explNode, data);
			break;
		}
		printf("next");
	}
	printList(list);

	Node *prevNode = NULL;
	printf("delete %d\n", deleteIdx);
	for (Node *explNode = list.front; explNode != NULL; next(explNode))
	{
		if (explNode->data == deleteIdx)
		{
			delNode(list, prevNode, explNode);
			break;
		}
		prevNode = explNode;
	}
	printList(list);

	clear(list);
	printList(list);
}