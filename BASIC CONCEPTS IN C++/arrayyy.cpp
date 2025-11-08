#include <stdio.h>

int main(){
	int size;
	
	printf("Enter the size of an array: ");
	scanf("%d", &size);
	int *ptr = &size;
	
	
	int arr1[*ptr];
	for (int i = 0; i < size; i++){
		printf("FIRST ARRAY: Enter the elements for %d: ", i+1);
		scanf("%d", &arr1[i]);	
	}
	
	printf("\n");
	int arr2[*ptr];
	for (int i = 0; i < size; i++){
		printf("SECOND ARRAY: Enter the elements for %d: ", i+1);
		scanf("%d", &arr2[i]);	
	}
	
	int arr3[*ptr];
	for (int i = 0; i < size; i++){
		if (arr1[i] > arr2[i]){
			arr3[i] = arr1[i];
		}	
		else {
			arr3[i] = arr2[i];
		}
	}
	
	int *point= arr3;
	for (int i = 0; i < size; i++){
		printf("%d ", point[i]);	
	}
	
	return 0;
}