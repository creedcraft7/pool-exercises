#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(){
    char arr[] = "hello world!";
    ft_strcpy(arr,"bye bye bro");
    puts(arr);
    return 0;
}

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return dest;
}