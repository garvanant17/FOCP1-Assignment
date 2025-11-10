#include<stdio.h>
int main(){
    int scores[]={14,76,83,53,8,27};
    int max = scores[0];
    int min = scores[0];
    for(int i = 0; i<6;i++){
        if(scores[i]>max)
        max = scores[i];
        if(scores[i]<min)
        min = scores[i];
    }
    printf("highest score is %d\n", max);
    printf("lowest score is %d", min);
    
}
