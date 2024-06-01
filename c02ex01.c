#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

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

int main(){
    unsigned int length = 15;
    char arr[] = "hello world!";
    strncpy(arr,"ayo brotha stop sucking it that hard",length);
    //puts(arr);
    printArray(arr, length, 'c');
    char arr2[] = "hello world!";
    ft_strncpy(arr2,"ayo brotha stop sucking it that hard",length);
    printArray(arr2, length, 'c');
    //puts(arr2);
    return 0;
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i = 0, z=0;
    while(i<n){
        if(z || !src[i]){
            dest[i] = 0;
            z=1;
        }else{
            dest[i] = src[i];
        }
        i++;
    }
    return dest;
}