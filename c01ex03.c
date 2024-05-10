#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(){
    int a = 106, b = 10, div = -1, mod = -1;
    ft_div_mod(a,b,&div,&mod);
    printf("\ndiv = %i mod = %i\n",div,mod);
}

void ft_div_mod(int a, int b, int *div, int *mod){
    if(b){
        *div = a/b;
        *mod = a%b;
    }
}