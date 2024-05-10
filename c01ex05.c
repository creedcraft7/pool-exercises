#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int main(){
    char str[6] = {'k','h','a','l','i','d'};
    ft_putstr(str);
}

void ft_putstr(char *str){
    int i=0;
    //printf("value of array %i", *(str+6));
    while(*str){
        write(1,str,1);
        str++;
        i++;
    }
}