#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(){
    char s[] = "AADNCJK\nsdiuNS";
    printf("the return is %i\n",ft_str_is_alpha(s));
    return 0;
}

int ft_str_is_alpha(char *str){
    int i = 0, z=0;
    while((str[i] > 31 && str[i] < 127) && str[i]){
        i++;
    }
    if(str[i]){
        return 0;
    }
    return 1;
}