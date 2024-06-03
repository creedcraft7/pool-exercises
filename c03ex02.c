#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(){
    char s1[5] = "apple", s2[] = "khalid";
    printf("the original return is %s\n",strcat(s1,s2));
    char s3[5] = "apple", s4[] = "khaliz";
    printf("my return is %s\n",ft_strcat(s3,s4));
    return 0;
}

char *ft_strcat(char *dest, char *src){
    int i =0;
    while(dest[i]){
        i++;
    }
    while(*src){
        dest[i] = *src;
        src++,i++;
    }
    dest[i] = 0;
    return dest;
}