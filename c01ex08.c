#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ft_rev_int_tab(int *tab, int size);
void printArray(void *arr, int size, char type);
void ft_swap(int *a, int *b);

int main(){
    //int str[] = {7,3,4,2,8,1};
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random size for the array (between 1 and 100)
    int size = rand() % 10 + 1;

    // Allocate memory for the array dynamically
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign random values to the array elements
    for (int i = 0; i < size; i++) {
        array[i] = rand()%11; // You can modify this to generate values within a specific range if needed
    }

    // Print the array elements
    printf("Generated array of size %d with random values less than 100:\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    ft_rev_int_tab(array,size);
    printArray(array,size,'i');
    
}

void ft_rev_int_tab(int *tab, int size){
    int n=0,i=n;
    while(n<size){
        int *p = &tab[n];
        while(i < size){
            if(tab[i] < *p) p = &tab[i];
            i++;
        } ft_swap(&tab[n],p); n++; i=n; 
    }
}

void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print elements of an array within {} braces
void printArray(void *arr, int size, char type) {
    printf("{");
    if (type == 'i') { // For integer arrays
        int *intArr = (int *)arr;
        for (int i = 0; i < size; i++) {
            printf("%d", intArr[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
    } else if (type == 'c') { // For character arrays
        char *charArr = (char *)arr;
        for (int i = 0; i < size; i++) {
            printf("%c", charArr[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
    }
    printf("}\n");
}