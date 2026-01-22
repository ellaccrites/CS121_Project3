// bubbles.c

#include <stdio.h>

const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);
	
	return(0);
} // end main

void printValues(int* array){
        int i = 0;

        printf("[ ");
        for(i = 0; i < MAX; i++){
                printf("%d  ", array[i]);
        } // end for
	
        printf("]  \n");
} // end printValues

void swap(int* pX, int* pY){
        int a = *pX;
        int b = *pY;

        *pY = a;
        *pX = b;
} // end swap

void sort(int* array){
	int i = 0;
	int j = 0;

	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(array[j] > array[j+1]){
				swap(array + j, array + j + 1);
				printValues(array);
			} // end if
		} // end for
	} // end for
} // end sort

