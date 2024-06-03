#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(){
    char s1[] = " ", s2[] = " ";
    s1[0] = 127;
    s1[0]++;
    s2[0] = 0;
    printf("the return is %i\n",ft_strcmp(s1,s2));
    printf("the return is %i\n",strcmp(s1,s2));
    return 0;
}

int ft_strcmp(char *s1, char *s2){
    int i =0;
    while(s1[i] || s2[i]){
        if(s1[i] != s2[i]){
            return (unsigned char)s1[i] - (unsigned char)s2[i];
            //return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}