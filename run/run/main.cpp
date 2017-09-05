//combinations (방법 2)

#include <stdio.h>
#include <time.h> //cplusplus.com

int f(int n, int k){
    if(n==k) return 1;
    if(k==1) return n;
    return (double)(n-k+1)/k*f(n,k-1);
}
int main(){
    int n,k ;
    scanf("%d %d",&n, &k);
    
    time_t s=clock();    //실행 시간 측정 시작
    
    printf("%d\n",f(n,k));
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
