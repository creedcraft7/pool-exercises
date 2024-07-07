#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

char* ft_convert_base(char *nbr, char *base_from, char *base_to);
long ft_atoi_base(char *str, char *base);
char* ft_putnbr_base(int nbr, char *base);

int power(int a, int b){
    int result = 1;
    while(b--){
        result *= a;
    }
    return result;
}

int main(int argc, char *argv[])
{
    //ft_putnbr_base(ft_atoi_base("   +4325()567812","01234567"),"01");
    printf("result %s\n",ft_convert_base("   +7777777777()567812","01234567","01"));
}

char* ft_convert_base(char *nbr, char *base_from, char *base_to){
    long n = ft_atoi_base(nbr,base_from);

    if(n == 9999999999){
        return NULL;
    }

    return ft_putnbr_base((int) n,base_to);
}

long ft_atoi_base(char *str, char *base){
    int i=0,n=0,sign = 0,l = 0,pow=0,isInBase = 1,index;
    long result = 0;
    int digits[32];

    //checking the base length and validity
    while(base[i]){
        l++;
        n = i-1;
        if(base[i] == '+' || base[i] == '-' || base[i] == ' '){
            printf("base contains illegal chars\n");
            return 9999999999;
        }
        while(n > -1 && i){
            if(base[i]==base[n]){
                printf("base contains illegal chars\n");
                return 9999999999;
            }
            n--;
        }
        i++;
    }
    if(l<2)
        return 9999999999;

    //end of base check which is related to ft_putnbr_base, we reset vars now
    i=0,n=0;

    //start of actuall string check
    while(str[i] == ' ' || (str[i] > 8 && str[i] < 13)){
        n++;
        i++;
    }

    while(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-')
            sign++;
        i++;
    }
    //end of actual string check which is related to ft_atoi,
    //we checked untill the point when we need to convert
    n=0;
    index = i;

    //checking untill we find a char that isnt in base so we dont process anything after,
    //and saving the index in the base of each one at the same time
    while(isInBase){
        isInBase = 0;
        while(base[n]){
            if(i-index > 32){
                printf("doesnt fit the array\n");
                return 9999999999;
            }
            if(base[n] == str[i]){
                digits[i-index] = n;
                isInBase = 1;
                n=0;
                i++,pow++;
                break;
            }
            n++;
        }
    }
    i=0;
    
    //the actual logic, we convert from the base to decimal
    while(pow){
        result += (long)power(l,pow-1) * digits[i];
        if((result>2147483647 && sign%2 == 0) || (result < -2147483648 && sign%2)){
            printf("doesnt fit an int\n");
            return 9999999999;
        }
        pow--,i++;
    }

    //adding the sign
    if(sign%2)
        result = -result;

    return result;
}

char* ft_putnbr_base(int nbr, char *base){
    long lnbr = nbr;
    int i = 0,l=0,n,Quotient = 1;
    char s[33] = {0};
    
    while(base[i]){
        l++;
        n = i-1;
        if(base[i] == '+' || base[i] == '-')
            return NULL;
        while(n > -1 && i){
            if(base[i]==base[n] )
                return NULL;
            n--;
        }
        i++;
    }
    if(l<2)
        return NULL;

    if(nbr<0){
        lnbr = -lnbr;
    }

    i=0;
    while(Quotient){
        Quotient = lnbr/l;
        s[i] = base[lnbr%l];
        lnbr/=l;
        i++;
    }

    char* ptr;

    if(nbr>-1){
        ptr = malloc(4*(i+1));
        n = -1;
    }else{
        ptr = malloc(4*(i+2));
        n = 0;
        ptr[n] = '-';
    }

    while(i>-1){
        ptr[i+1+n] = s[i];
        i--;
    }
    return ptr;
}