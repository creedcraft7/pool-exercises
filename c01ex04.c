#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(){
    int a = 106, b = 10;
    ft_ultimate_div_mod(&a,&b);
    printf("\nresult = %i remainder = %i\n",a,b);
}

void ft_ultimate_div_mod(int *a, int *b){
    if(*b){
        int temp = *a;
        *a = temp / *b;
        *b = temp % *b;
    }
}