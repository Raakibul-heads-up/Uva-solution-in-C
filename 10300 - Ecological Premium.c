#include<stdio.h>
int main(){
    int n,sum=0,a,b,c,f,D;

    scanf("%d",&D);
    for(f=0;f<D;f++){
        scanf("%d",&n);
         sum = 0;
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&a,&b,&c);
            sum += a*c;
        }
        printf("%d\n",sum);
    }


return 0;
}
