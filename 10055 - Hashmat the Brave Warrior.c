#include<stdio.h>
int main(){
    long long int a,b;
    while(scanf("%lld %lldd",&a,&b)!=EOF){
        if(a>b){
            printf("%lld\n",a-b);
        }
        else{
            printf("%lld\n",b-a);
        }
    }

return 0;
}
