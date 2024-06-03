#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(){
    char s1[20] = "this is the way", s2[] = "";
    //printf("the original return is %s\n",strstr(s1,s2));
    if(strstr(s1,s2) == NULL){
        printf("null");
    }else{
        //printf("the p %p and the s '%s' and the original p %p\n",strstr(s1,s2),strstr(s1,s2), s1);
    }
    char s3[20] = "this is the way", s4[] = "now";
    printf("my return is %s\n",ft_strstr(s3,s4));
    return 0;
}

char *ft_strstr(char *str, char *to_find){
    int i=0,j=0,before =0;
    char* ptr;
    while(str[i]){
        if(str[i] == to_find[j] && to_find[j]){
            if(!before){
                ptr = &str[i];
                before = 1;
            }
            j++;
        }else if(!to_find[j]){
            if(!before){
                return &str[0];
            }
            return ptr;
        }else{
            before = 0;
            ptr = NULL;
            j=0;
        }
        i++;
    }
    return ptr;
}