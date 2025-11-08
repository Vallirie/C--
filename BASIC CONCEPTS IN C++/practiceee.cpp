#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;	
};

int main (){
	struct Node* head = (struct Node*) malloc (sizeof(struct Node)); 
	head -> data = 50;
	head -> next = NULL;
	
	struct Node* second = (struct Node*)malloc(sizeof(struct Node));
	second -> data = 60;
	second -> next = NULL;
	head -> next = second;
	
	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
	third -> data = 50;
	third -> next = NULL;
	second -> next = third;
	
	struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
	fourth ->data = 70;
	fourth ->next = NULL;
	third -> next = fourth;
	
	struct Node* temp = head;
	while (temp!= NULL){
		printf("%d->",temp->data);
		temp = temp ->next;
	}
	printf("NULL\n\n");
	
	struct Node* Newnode = (struct Node*)malloc (sizeof(Node));
	Newnode -> data = 200;
	Newnode -> next = head -> next;
	head -> next = Newnode;
	
	printf("AFTER THE INSERTION \n\n");
	temp = head;
	while (temp !=NULL){
		printf("%d->", temp -> data);
		temp = temp -> next;
	}
	printf("NULL");
	
	return 0;
}