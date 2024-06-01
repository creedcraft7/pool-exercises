#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(){
    char s[] = "138";
    printf("the return is %i\n",ft_str_is_numeric(s));
    return 0;
}

int ft_str_is_numeric(char *str){
    int i = 0, z=0;
    while((str[i] > 47 && str[i] < 58) && str[i]){
        i++;
    }
    if(str[i]){
        return 0;
    }
    return 1;
}