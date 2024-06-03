#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(){
    char s1[] = "apple", s2[] = "apples";
    printf("the return is %i\n",ft_strncmp(s1,s2,6));
    printf("the return is %i\n",strncmp(s1,s2,6));
    return 0;
}

int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i =0;
    while((s1[i] || s2[i]) && n>i){
        if(s1[i] != s2[i]){
            return (unsigned char)s1[i] - (unsigned char)s2[i];
            //return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}