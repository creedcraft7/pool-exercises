#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);
void printArray(void *arr, int size, char type);

int main(){
    int str[] = {1,2,3,4,5,6};
    ft_rev_int_tab(str,sizeof(str)/sizeof(str[0]));
    printArray(str,sizeof(str)/sizeof(str[0]),'i');
}

void ft_rev_int_tab(int *tab, int size){
    int temp,i=0;
    while(i<size/2){
        temp = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = temp;
        i++;
    }
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