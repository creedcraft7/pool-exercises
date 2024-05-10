#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(){
    char str[] = {'k','h','a','l','i','d'};
    printf("the size is %i\n",ft_strlen(str));
}

int ft_strlen(char *str){
    int i=0;
    while(*str++){
        i++;
    }
    return i;
}