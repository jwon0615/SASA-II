//피보나치 계산 (동적 테이블)
#include <cstdio>
#include <time.h>

int DT[100001];

int f(int n){
    if(n<=2)
        return 1;
    if(!DT[n])
        DT[n]=(f(n-1)+f(n-2))%100009;
    return DT[n]%100009;
}

int main(){
    int n;
    scanf("%d", &n);
    
    time_t s = clock();
    
    printf("%d\n", f(n));
    
    time_t e=clock();
    printf("\n%fseconds\n", (float)(e-s)/CLOCKS_PER_SEC);
    return 0;
    
}
