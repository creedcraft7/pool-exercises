#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ten_queens_puzzle(void);
int backtracking(char* places, int lengthIndex);
int checkTwoQueens(int roa, int rob, int dis);
int checkPlaces(char* places);

int main(){
    ft_ten_queens_puzzle();
    return 0;
}

int ft_ten_queens_puzzle(void){
    int i = 0;
    char places[10];
    while(i<10){
        places[0] = i+48;
        backtracking(places,1);
        i++;
    }
    return 0;
}

int backtracking(char* places, int lengthIndex){
    int i=0;

    places[lengthIndex] = '0';
    while(places[lengthIndex]<58){
        if(checkPlaces(places)){
            if(lengthIndex == 9){
                printf("%s\n",places);
            }else{
                backtracking(places,lengthIndex+1);
            }
        }
        if(places[lengthIndex]<57){
            places[lengthIndex]++;
        }else{
            places[lengthIndex] = 0;
            break;
        }
    }
    return 0;
}

int checkPlaces(char* places){
    int i=0,j=1;
    while(places[i+1]){
        while(places[i+j]){
            if(checkTwoQueens(places[i],places[i+j],j)){
                return 0;
            }
            j++;
        }
        i++,j=1;
    }
    return 1;
}

int checkTwoQueens(int roa, int rob, int dis){
    if(roa == rob || roa == rob+dis || roa == rob-dis){
        return 1;
    }else{
        return 0;
    }
}