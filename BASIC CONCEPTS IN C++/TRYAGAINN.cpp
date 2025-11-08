#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	char name[100];
	int data;
	struct Node* next;
}Node;

Node* head;
void insert(const char* name1, int price);
void pront();
void choice();
void dele(const char* namer);

int main(){
	int price;
	int option;
	char name1[100];
	int tryagain;
		
		do{
		choice();
		printf("Choose an option: ");
		scanf("%d", &option);
		getchar();
		
		if(option == 1){
			printf("Insert an Item: ");
			fgets(name1, sizeof(name1),stdin);
			name1[strcspn(name1, "\n")] = '\0';
			printf("Insert the price: ");
			scanf("%d", &price);
			insert(name1, price);
			printf("your item has been added!\n\n");
		}
		else if(option == 2){
			pront();	
		}else if(option == 3){
			printf("Insert an Item to delete: ");
			fgets(name1, sizeof(name1),stdin);
			name1[strcspn(name1, "\n")] = '\0';
			dele(name1);	
		}
		
		
		else if(option ==4){
			printf("Thank you for coming <3\n");
			return 0;
		}
		else{
			printf("Wrong option!!\n");
		}
	
		
	}while (tryagain !=1);

}
void insert(const char* name1, int price){
	Node* firstname = (Node*)malloc(sizeof(Node));
	strcpy(firstname -> name, name1);
	firstname -> data = price;
	firstname -> next = head;
	head = firstname;
}

void pront(){
	printf("\n----------Displayed items------------\n");
	Node* temp = head;
	while(temp != NULL){
		printf("Item: %s   ||  Price: %d\n", temp -> name, temp ->data);
		temp = temp -> next;
	}
	printf("\n");
}

void dele(const char* namer){
	Node* temp = head; 
	Node* back = NULL;
	while (temp != NULL){
		if (strcmp(temp -> name, namer) == 0){
			if (back == NULL){
				head = temp -> next;
			}
			else{
				back -> next = temp -> next;
			}
			 free(temp);
            printf("Item '%s' has been deleted.\n\n", namer);
            return;
		}
		back = temp;
        temp = temp->next; 	
	 }
	printf("Item '%s' not found in the list.\n\n", namer);
	}
	
void choice(){
	printf("WELCOME TO TAMS GROCERY STORE!!\n");
	printf("-------------------------------\n");
	printf("- 1. Add an item              -\n");
	printf("- 2. Display for Items        -\n");
	printf("- 3. Remove the item          -\n");
	printf("- 4. Exit                     -\n");
	printf("-------------------------------\n");
	
}
