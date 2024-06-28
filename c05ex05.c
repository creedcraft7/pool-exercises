#include <stdio.h>
#include <string.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(){
    printf("the return is %i\n",ft_sqrt(22));
    return 0;
}

int ft_sqrt(int nb){
    long min = 0, max = nb, current = nb;
    while(nb>-1){
        if(current*current == nb){
            return current;
        }else if(current*current > nb){
            max = current;
            if(max-min<=1 && max-min>=-1){
                return 0;
            }
            current = (current + min)/2;
        }else{
            min = current;
            if(max-min<=1 && max-min>=-1){
                return 0;
            }
            current = (current + max)/2;
        }
    }
    return 0;
}