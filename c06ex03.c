#include <stdio.h>
#include <unistd.h>

void print(char* buffer);
int ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[]){
    int i=0,j=1;
    char* p[argc-1];

    while(i+1<argc){p[i] = &(argv[i+1][0]);i++;}

    for(i=0;i<argc-2;i++){
        for(j=i+1;j<argc-1;j++){
            if(ft_strcmp(p[i],p[j])>0){char* temp = p[i];p[i] = p[j];p[j] = temp;}
        }
    }
    i=0;
    while(i<argc-1){
        print(p[i]);
        write(1,"\n",1);
        i++;
    }
    return 0;
}

void print(char* buffer){
    int i = 0;
    while(buffer[i]){
        write(1,&buffer[i],1);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2){
    int i =0;
    while(s1[i] || s2[i]){
        if(s1[i] != s2[i]){
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return 0;
}