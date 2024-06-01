#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

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
    char arr[] = "hello world!";
    char src[] = "anti";
    printf("the src size is %i\n",strlcpy(arr,src, 3));
    printArray(arr,13,'c');
    printf("the src size is %i\n",ft_strlcpy(arr,src, 3));
    printArray(arr,13,'c');
    return 0;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned int i = 0, strLen=0;
    while(src[strLen]){
        strLen++;
    }
    if(size >0){
        while(i<size-1 && i < strLen){
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    return strLen;
}