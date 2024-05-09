#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(){
    int i = 6,n=0;
    int *p1 = &i;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;
    
    printf("\nthe number is: %p\n",p9);
    ft_ultimate_ft(p9);
    printf("\nthe number is: %i\n",i);
    
    //printf("\nthe number is: %p\n",p);
}

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
}