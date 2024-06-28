#include <stdio.h>
#include <string.h>
#include <stdio.h>

int ft_is_prime(int nb);

int ft_sqrt(int nb){
    long min = 0, max = nb, current = nb;
    while(nb>-1){
        if(current*current == nb){
            return current;
        }else if(current*current > nb){
            max = current;
            if(max-min<=1 && max-min>=-1){
                return max;
            }
            current = (current + min)/2;
        }else{
            min = current;
            if(max-min<=1 && max-min>=-1){
                return max;
            }
            current = (current + max)/2;
        }
    }
    return 0;
}

int main(){
    printf("the return is %i\n",ft_is_prime(2147483647));
    return 0;
}

int ft_is_prime(int nb){
    int n=3,sqrt = ft_sqrt(nb);
    
    if(nb<2){
        return 0;
    }

    while(n <= sqrt){
        if(!(nb%n)){
            return 0;
        }
        n +=1;
    }
    return 1;
}