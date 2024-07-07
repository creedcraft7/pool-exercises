#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int** range, int min, int max);

int main(int argc, char *argv[])
{
    int n;
    int* p;
    n = ft_ultimate_range(&p,3,6);
}

int ft_ultimate_range(int** range, int min, int max){
    if(min >= max){
        *range = NULL;
        return 0;
    }

    int i =0;
    *range = (int*) malloc(4*(max-min));

    if(*range == NULL)
        return -1;

    while(i<max-min){
        (*range)[i]= min+i;
        printf("%i\n",(*range)[i]);
        i++;
    }
    
    return max-min;
}