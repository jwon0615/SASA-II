#include <stdio.h>

int main(){
    long long int a=0;
    for(int i=1;i<=9999999;i++)
    {
        a+=i;
    }
    printf("%lld",a);
    return 0;
}
