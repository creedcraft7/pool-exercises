#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main(){
    printf("the return is %i\n",ft_iterative_power(0,1));
    return 0;
}

int ft_iterative_power(int nb, int power){
    int result = 1;
    if(power<0)
        return 0;
    while(power--){
        result *= nb;
    }
    return result;
}