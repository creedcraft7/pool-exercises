#include <stdio.h>
#include <stdlib.h>

char* ft_strdup(char* src);

int main() {
    printf("Hello, World");
    char arr[] = "sup brotha!";
    printf("the new arr is: %s\n",ft_strdup(arr));
    return 0;
}

char* ft_strdup(char* src){
    int i = 0;
    while(src[i++]);
    char* result = malloc(i);
    result[i] = 0;
    while(i>-1){
        result[i] = src[i];
        i--;
    }
    printf("\n%i\n",i);
    return result;
}