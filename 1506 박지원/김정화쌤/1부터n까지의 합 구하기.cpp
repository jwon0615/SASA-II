//수학적 귀납법
//1부터 n까지의 합 구하기

#include <stdio.h>
#include <time.h> //cplusplus.com

//long long int f(long long int n){
//    if(n==1) return 1;
//    return f(n-1)+n;
//}

long long int f(long long int n){
    if(n==1) return 1;
    return 2*f(n/2)+((n+1)/2)*((n+1)/2);
}

int main(){
    int n;
    scanf("%d",&n);
    
    time_t s=clock();    //실행 시간 측정 시작
    
    printf("%lld\n",f(n));
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
