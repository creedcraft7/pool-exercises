#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

int main(){
    int i = -2147483648;
    ft_putnbr_base(i,"0123456789ABCDEF");
}

void ft_putnbr_base(int nbr, char *base){
    long lnbr = nbr;
    int i = 0,l=0,n,Quotient = 1;
    char s[32];
    while(base[i]){
        l++;
        n = i-1;
        if(base[i] == '+' || base[i] == '-')
            return;
        while(n > -1 && i){
            if(base[i]==base[n] )
                return;
            n--;
        }
        i++;
    }
    if(l<2)
        return;

    if(nbr<0){
        write(1,"-",1);
        lnbr = -lnbr;
    }

    i=0;
    while(Quotient){
        Quotient = lnbr/l;
        s[i] = base[lnbr%l];
        lnbr/=l;
        i++;
    }

    while(i>-1){
        write(1,&s[--i],1);
    }
    write(1,"\n",1);
}