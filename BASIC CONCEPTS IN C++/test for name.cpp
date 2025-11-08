#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	char name[100];
	struct Node* next;
}Node;

int main(){
	
	Node* head = (Node*)malloc(sizeof(Node));
	Node* first = (Node*)malloc(sizeof(Node));
	Node* second = (Node*)malloc(sizeof(Node));
	Node* third = (Node*)malloc(sizeof(Node));
	
		strcpy(head->name, "Anthony");
   		head->next = first;

    	strcpy(first->name, "Samuel");
    	first->next = second;

    	strcpy(second->name, "Samantha");
    	second->next = third;

    	strcpy(third->name, "Anna");
    	third->next = NULL;
		
	Node* temp = head;
	while(temp != NULL){
		printf("%s ->", temp ->name);
		temp = temp ->next;
	}
	printf("NULL");
	
		Node* Newnode = (Node*)malloc(sizeof(Node));
		strcpy(Newnode -> name, "Zarrah");
		Newnode -> next = second -> next;
		second -> next = Newnode;
		
		
	printf("\nNew INSERTION\n");
		temp = head;
	while(temp != NULL){
		printf("%s ->", temp ->name);
		temp = temp ->next;
	}	
	printf("NULL");
	
	
	
	return 0;
	
}