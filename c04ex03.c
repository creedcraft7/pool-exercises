#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_atoi(char *str);

int main(){
    //printf("we have %i and %i and %i and %i and %i and %i\n",' ','\f','\n','\r','\t','\v');
    printf("result %i\n",ft_atoi("   ---+--+7350ab567"));
}

int ft_atoi(char *str){
    int i=0,n=0,sign = 0;
    long result = 0;
    while(str[i] == ' ' || (str[i] > 8 && str[i] < 13)){
        n++;
        i++;
    }

    while(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-')
            sign++;
        i++;
    }

    while(str[i] > 47 && str[i] < 58){
        result *=10;
        result += str[i] - 48;
        i++;
    }

    if(sign%2)
        result = -result;

    return (int) result;
}