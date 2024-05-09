#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n);
void ft_putnbr(int nb);

int main(){
    ft_print_combn(4);
    return 0;
}

void ft_print_combn(int n){
    int i=0,l=0,f=1;

    if(n==1){
        write(1,"0, ",3);
    }

    while(l<n){
        f*=10;
        l++;
        if(l==n){
            break;
        }
        i=i*10+l;
    }
    
    for(i=0,l=0;i<f;i++){
        int x = i%10;
        int y = i/10;
        int z = 1;
        while(y%10<x){
            if(z==n-1 || n<2){
                if(l!=0){
                    write(1,", ",2);
                }
                l=1;
                if(i<f/10){
                    write(1,"0",1);
                }
                ft_putnbr(i);
                break;
            }else{
                x=y%10;
                y/=10;
                z++;
            }
        }
    }
    printf("\n");
}

void ft_putnbr(int nb){
    int length = 1, m = nb,sign =1;

    while(m/10 != 0){
        m /= 10;
        length++;
    }

    char buffer[length];
    if(nb < 0){
        write(1,"-",1);
        sign = -1;
    }

    for(; length != 0;length--){
        m = (nb%10)*sign + 48;
        buffer[length-1] = m;
        nb /= 10;
    }

    int intSize = sizeof(buffer) / sizeof(buffer[0]);
    for(m=0;m<intSize;m++){
        write(1,&buffer[m],1);
    }
}