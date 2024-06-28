#include <stdio.h>
#include <unistd.h>

void print(char* buffer);

int main(int argc, char *argv[]){
    int i;
    for(i=argc-1; i>0;i--){
        print(argv[i]);
        write(1,"\n",1);
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