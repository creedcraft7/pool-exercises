#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(){
    char s[] = "AADNCJKsdiuNS";
    printf("the return is %i\n",ft_str_is_alpha(s));
    return 0;
}

int ft_str_is_alpha(char *str){
    int i = 0, z=0;
    while((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91) && str[i]){
        i++;
    }
    if(str[i]){
        return 0;
    }
    return 1;
}