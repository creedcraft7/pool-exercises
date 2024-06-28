#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main(){
    printf("the return is %i\n",ft_iterative_power(4,0));
    return 0;
}

int ft_iterative_power(int nb, int power){
    if(power<0){
        return 0;
    }else if(power>0){
        return nb * ft_iterative_power(nb,power-1);
    }else{
        return 1;
    }
}