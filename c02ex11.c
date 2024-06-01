 #include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(){
    //char s[] = "kHaLiDwA3RbZaF";
    char s[] = "Coucou\ntu vas bien ?";
    //s[6] = 127;
    ft_putstr_non_printable(s);
    //puts(s);
    return 0;
}

void ft_putstr_non_printable(char *str){
    int i = 0;
    char hex_digits[] = "0123456789abcdef";
    while(str[i]){
        if(str[i] > 126 || str[i] < 32){
            write(1,"\\0",2);
            if(str[i]/16)
                write(1,&hex_digits[str[i]/16],1);
            write(1,&hex_digits[str[i]%16],1);
        }else{
            write(1,&str[i],1);
        }
        i++;
    }
}