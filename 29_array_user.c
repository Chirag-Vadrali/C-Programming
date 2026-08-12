#include <stdio.h>

int main(){
    
    int socres[5] = {0};
    for (int i = 0; i<5;i++){
        printf("Enter the score %d: ", i);
        scanf("%d",&socres[i]);
    }
    for(int i = 0; i<5;i++){
        printf("%d ", socres[i]);
    }
}
