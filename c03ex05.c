#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb);

size_t strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dlen = strlen(dst);
    size_t slen = strlen(src);
    size_t total = dlen + slen;

    if (dstsize <= dlen) {
        return dstsize + slen;
    }

    size_t len = dstsize - dlen - 1;
    if (len > 0) {
        strncat(dst, src, len);
    }

    return total;
}

int main(){
    int n=23;
    char s1[20] = "apple", s2[] = "khalider";//j                              //nb
    printf("the original return is %zu, and its string is %s\n",strlcat(s1,s2,n),s1);
    char s3[20] = "apple", s4[] = "khalider";
    printf("my return is %i, and its string is %s\n",ft_strlcat(s3,s4,n),s3);
    return 0;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb){
    int i = 0,j=0,k=0;
    while(dest[i]){
        i++;
    }
    while(src[j]){
        j++;
    }
    if(nb != 0){
        while(src[k] && nb-1 > k+i){
            dest[i+k] = src[k];
            k++;
        }
        dest[i+k] = '\0';
    }
    if(nb <= i)
        return nb + j;
    return i+j;
}