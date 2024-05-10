#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(){
    int a = 6, b = 9;
    printf("\na = %i b = %i\n",a,b);
    ft_swap(&a, &b);
    printf("\na = %i b = %i\n",a,b);
}

void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}