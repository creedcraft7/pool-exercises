#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"
#include <unistd.h>

void ft_putstr(char *str) {
    while (*str)
        write(1, str++, 1);
}

void ft_putnbr(int nb) {
    char c;
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

void ft_show_tab(struct s_stock_str *par) {
    int i = 0;
    while (par[i].str != 0) {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}

char *ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(){
    char *arr[] = {"hey","you","good?"};
    
    ft_show_tab(ft_strs_to_tab(3,arr));
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    int n = 0,i=0;

    t_stock_str* structarr = (t_stock_str*) malloc((ac+1) * sizeof(t_stock_str));
    if(structarr == NULL){
        free(structarr); 
        return NULL;
    }

    while(n<ac){
        i = ft_strlen(av[n]);
        char* dest = (char*) malloc((i+1)*sizeof(char));
        char* dest2 = (char*) malloc((i+1)*sizeof(char));

        if(dest == NULL || dest2 == NULL){
            free(dest); 
            free(dest2);
            return NULL;
        }

        structarr[n].copy = ft_strcpy(dest,av[n]);
        structarr[n].str = ft_strcpy(dest2,av[n]);
        structarr[n].size = (i>0) ? i : 0;

        n++;
    }

    structarr[n].str = 0;
    return structarr;
}

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return dest;
}

int ft_strlen(char *str){
    int i=0;
    while(*str++){
        i++;
    }
    return i;
}