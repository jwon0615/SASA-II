//수학적 귀납법
//10진법 정수 n을 k 진법으로 출력하기

#include <stdio.h>
#include <time.h> //cplusplus.com

void f(int n, int k){
    if(n<k) printf("%d",n);
    else f(n/k,k), printf("%d",n%k);
}

int main(){
    int n, k;
    scanf("%d %d",&n, &k);
    
    time_t s=clock();    //실행 시간 측정 시작
    
    f(n,k);
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
