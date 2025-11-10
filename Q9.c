#include <stdio.h>
int main(){
    int scores[5] = {14,64,27,99,43},  i;
    for(i=0; i<=5; i++){
        if(scores[i]==99){
        printf("score is 99 at %d",i+1);
        break;}
    }
}
