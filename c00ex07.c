#include <unistd.h>

void ft_putnbr(int nb);


int main(){
    int i = -2147483648;
    ft_putnbr(i);
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