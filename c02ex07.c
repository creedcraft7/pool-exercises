#include <stdio.h>

char *ft_strupcase(char *str);

int main(){
    char s[] = "kHaLiDwA3RbZaF";
    ft_strupcase(s);
    puts(s);
    return 0;
}

char *ft_strupcase(char *str){
    int i = 0;
    while(str[i]){
        if(str[i] > 96 && str[i] < 123)
            str[i]-= 32;
        i++;
    }
    return str;
}