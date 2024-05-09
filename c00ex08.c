#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n);

int main(){
    ft_print_combn(3);
    return 0;
}

void ft_print_combn(int n){
    int i=0;
    char v[n];
    while(i<n){
        v[i]='0';
        i++;
    }
    while(v[n-1]<58-n){
        printer(v,0,n);
        print(&v[n-1],n);
    }
}

printer(char *c,int i,int n){
    if(*c<57-i){
        *c = *c+1;
    }else if(*(c+n-1)<57-n+1){
        printer(c+1,i+1,n);
        *c = *(c+1)+1;
    }
}

print(char *c,int size){
    while(size!=0){
        write(1,c,1);
        size--;
        c--;
    }
    write(1,"\n",1);
}