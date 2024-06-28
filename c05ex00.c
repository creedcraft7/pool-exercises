#include <stdio.h>
#include <string.h>

int ft_iterative_factorial(int nb);

int main(){
    printf("the return is %i\n",ft_iterative_factorial(4));
    return 0;
}

int ft_iterative_factorial(int nb){
    int result = 1;
    if(nb<0){
        return 0;
    }
    while(nb){
        result *= nb--;
    }
    return result;
}