void ft_print_comb2(void);
int main(){
    
    //write(1,&i,1);
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(){
    char i,j,k,l;
    for(i ='0';i<='9';i++){
        for(j ='0';j<='9';j++){
            for(k ='0';k<='9';k++){
                for(l='0';l<='9';l++){
                    if(i*10 + j < k*10 + l){
                        write(1,&i,1);
                        write(1,&j,1);
                        write(1," ",2);
                        write(1,&k,1);
                        write(1,&l,1);
                        if(i+j+k+l !=227){
                            write(1,", ",2);
                        }
                    }
                }
            }
        }
    }
}