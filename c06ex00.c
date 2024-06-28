#include <stdio.h>
#include <unistd.h>

void print(char* buffer);

int main(int argc, char *argv[]){
    print(argv[0]);
    return 0;
}

void print(char* buffer){
    int i = 0;
    while(buffer[i]){
        write(1,&buffer[i],1);
        i++;
    }
}