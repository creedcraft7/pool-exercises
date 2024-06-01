#include <stdio.h>
#include <unistd.h>
#include <string.h>

void *ft_print_memory(void *addr, unsigned int size);

void printz(char* c){
    while(*c){
        write(1,c,1);
        c++;
    }
}

void addr_to_st(void *addr){
    char s[] = "0123456789abcdef", r[] = "0000000000000000";
    unsigned long ptr = (unsigned long)addr;
    int i;
    for(i=0;ptr;i++){
        r[15-i] = s[ptr%16];
        ptr/=16;
    }
    printz(r);
}

void content(char* c,int size){
    char r[] = "                ";
    int i=0;
    for(i=0;i<16 && c[i];i++){
        if(c[i]>31 && c[i]<127){
            r[i] = c[i];
        }else{
            r[i] = '.';
        }
    }
    printsize(r,size);
}

int txt_to_hex(char* c,int size){
    char r[] = "................", h[] = "0123456789abcdef", g[40];
    int i,k=0,j=1;

    for(i=0;i<36;i+=5,k++){
        if(c[k] && j){
            g[i] = h[c[k]/16];
            g[i+1] = h[c[k]%16];
        }else{
            g[i] = ' ';
            g[i+1] = ' ';
            j=0;
        }
        k++;
        if(c[k] && j){
            g[i+2] = h[c[k]/16];
            g[i+3] = h[c[k]%16];
        }else{
            g[i+2] = ' ';
            g[i+3] = ' ';
            j=0;
        }
        g[i+4] = ' ';
    }
    if(size>2){
        size = size*2+size/2;
    }else{
        size*=2;
    }
    printsize(g,size);
    
    return j;
}

void *ft_print_memory(void *addr, unsigned int size){
    if(size){
        char h[] = "0123456789abcdef", j[2];
        int i = 0,k=0;
        char *charPtr = (char *)addr;
    
        for(i;charPtr[i] && i<size;i+=16,size-=16){
            addr_to_st(&charPtr[i]);
            printz(": ");
            printf("%i",size);
            if(!txt_to_hex(&charPtr[i],size)){
                content(&charPtr[i],size);
                break;
            }
            content(&charPtr[i],size);
            printz("\n");
        }
    }
}

void printsize(char* c, int n){
    int i;
    for(i=0;c[i];i++){
        if(i<n){
            write(1,&c[i],1);
        }else{
            write(1," ",1);
        }
    }
}

int main(){
    char s[] = "Bonjour les aminaujourdhui";
    s[21] = '\n';
    ft_print_memory(s,2);
    printz("\n");
    return 0;
}