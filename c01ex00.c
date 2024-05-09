#include <unistd.h>

void ft_ft(int *nbr);

int main(){
    int i = 5;
    ft_ft(&i);
    printf("\nthe number is: %i\n",i);
}

void ft_ft(int *nbr){
    *nbr = 42;
}