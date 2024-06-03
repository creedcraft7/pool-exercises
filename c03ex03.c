#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(){
    char s1[20] = "apple", s2[] = "khalid";
    printf("the original return is %s\n",strcat(s1,s2));
    char s3[20] = "apple", s4[] = "khalid";
    printf("my return is %s\n",ft_strncat(s3,s4,3));
    return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i =0;
    while(dest[i]){
        i++;
    }
    while(*src && nb--){
        dest[i] = *src;
        src++,i++;
    }
    dest[i] = 0;
    return dest;
}