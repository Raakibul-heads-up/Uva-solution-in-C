#include <stdio.h>
int main(){

    int  N;
    scanf("%d",&N);
    while(1){
        printf("%d ",N);

        if(N==1)
            break;
        else if(N&1)
            N = 3*N+1;
        else
            N = N/2;
    }
    return 0;
}

