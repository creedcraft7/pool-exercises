#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_atoi_base(char *str, char *base);

int power(int a, int b){
    int result = 1;
    while(b--){
        result *= a;
    }
    return result;
}

// Function to print elements of an array within {} braces
void printArray(void *arr, int size, char type) {
    printf("{");
    if (type == 'i') { // For integer arrays
        int *intArr = (int *)arr;
        for (int i = 0; i < size; i++) {
            printf("%d", intArr[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
    } else if (type == 'c') { // For character arrays
        char *charArr = (char *)arr;
        for (int i = 0; i < size; i++) {
            printf("%c", charArr[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
    }
    printf("}\n");
}

int main(){
    //printf("we have %i and %i and %i and %i and %i and %i\n",' ','\f','\n','\r','\t','\v');
    printf("result %i\n",ft_atoi_base("   ---+--+75()567812","01234567"));
}

int ft_atoi_base(char *str, char *base){
    int i=0,n=0,sign = 0,l = 0,pow=0,isInBase = 1,index;
    long result = 0;
    int digits[10];

    //checking the base length and validity
    while(base[i]){
        l++;
        n = i-1;
        if(base[i] == '+' || base[i] == '-' || base[i] == ' ')
            return 0;
        while(n > -1 && i){
            if(base[i]==base[n] )
                return 0;
            n--;
        }
        i++;
    }
    if(l<2)
        return 0;

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
        result += power(l,pow-1) * digits[i];
        pow--,i++;
    }

    //adding the sign
    if(sign%2)
        result = -result;

    return (int) result;
}