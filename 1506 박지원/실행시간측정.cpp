#include <stdio.h>
#include <time.h>

int main(){
    
    time_t s=clock();    //실행 시간 측정 시작
    
    long long int a=0;
    for(int i=1;i<=9999999;i++)
    {
        a+=i;
    }
    printf("%lld",a);
    
    time_t e=clock();
    printf("\n%fseconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
