#include <stdio.h>
#include <string.h>

int ft_recursive_factorial(int nb);

int main(){
    printf("the return is %i\n",ft_recursive_factorial(5));
    return 0;
}

int ft_recursive_factorial(int nb){
    if(nb<0){
        return 0;
    }
    if(2>nb){
        return 1;
    }else{
        return nb* ft_recursive_factorial(nb-1);
    }
}