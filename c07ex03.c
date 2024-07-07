#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[])
{
    char *strs[] = {"apple", "banana", "cherry", "date"};
    printf("%s\n",ft_strjoin(4,strs," + "));
}

char *ft_strjoin(int size, char **strs, char *sep){
    int i = 0,n=0,l=0,s=0;
    
    if(size == 0){
        return (char*) malloc(1);
    }

    //getting how many char in the combined strs
    while(n<size){
        while(strs[n][i]){
            l++;
            i++;
        }
        i=0;
        n++;
    }

    i=0;n=0;

    //getting how many chars in sep
    while(sep[i]){
        i++;
        n++;
    }

    //caltulating how much space to allocate for the chars when using malloc
    l = sizeof(char) * l+(n*(size-1))+1;

    i=0;
    n=0;

    char* resultPtr = malloc(l);

    while(i<l){
        if(!(s<size)){
            break;
        }
        while(strs[s][n]){
            resultPtr[i] = strs[s][n];
            i++;
            n++;
        }
        s++;
        n=0;
        while(sep[n] && s<size){
            resultPtr[i] = sep[n];
            i++;
            n++;
        }
        n=0;
    }
    resultPtr[i] = 0;

    return resultPtr;
}