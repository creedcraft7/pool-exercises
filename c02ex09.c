#include <stdio.h>

char *ft_strupcase(char *str);

int main(){
    //char s[] = "kHaLiDwA3RbZaF";
    char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strupcase(s);
    puts(s);
    return 0;
}

char *ft_strupcase(char *str){
    int i = 0,isFirstChar=1;
    while(str[i]){
        // if the str is lowercase and is the first char 
        if((str[i] > 96 && str[i] < 123)){
            if(isFirstChar){
                str[i]-= 32;
                isFirstChar = 0;
            }
        }else if((str[i] > 47 && str[i] < 58)){
            if(isFirstChar)
            isFirstChar = 0;
        }else if(str[i] > 64 && str[i] < 91){
            str[i]+= 32;
        }else{
            isFirstChar = 1;
        }
        i++;
    }
    return str;
}