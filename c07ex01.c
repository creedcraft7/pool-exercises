#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int** range, int min, int max);

int main(int argc, char *argv[])
{
    int n = 5;
    int* p = &n;
    printf("hello world!\n");
    printf("the return is: %i\n", ft_ultimate_range(&p,3,6));
}

int ft_ultimate_range(int** range, int min, int max){
    int i =0;
    int* result = (int*) malloc(4*(max-min-1));
    while(i<=max-min-1){
        result[i] = min+i;
        printf("%i\n",result[i]);
        i++;
    }
    //result[i] = 0;
    if(min >= max)
        return -1;
    return max-min;
}