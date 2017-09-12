//tile filling

#include <stdio.h>
#include <time.h> //cplusplus.com

int m;

int f1(int n){
    if(n<=1) return 1%m;
    else return (f1(n-1)+2*f1(n-2))%m;
}

int f2(int n){
    if(n<=1) return 1%m;
    else if(n%2) return (f2(n-1)+2*f2(n-2))%m; //n이 홀수일 때
    else return ((long long int)f2(n/2)*f2(n/2)+2*(long long int)f2(n/2-1)*f2(n/2-1))%m; //n이 짝수일 때
    }

int f3(int n){
    if(n<=1) return 1%m;
    else if(n%2) return ((long long int)f3(n/2)*f3(n/2+1)+2*(long long int)f3(n/2-1)*f3(n/2))%m; //n이 홀수일 때
    else return ((long long int)f3(n/2)*f3(n/2)+2*(long long int)f3(n/2-1)*f3(n/2-1))%m; //n이 짝수일 때
}

int main(){
    int n;
    scanf("%d %d",&n, &m);
    
    //[방법 1]--------------------------------------------------------------------
    
    time_t s1=clock();    //실행 시간 측정 시작
   
    printf("%d\n",f1(n));
    
    time_t e1=clock();
    printf("\n%f seconds\n",(float)(e1-s1)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    //[방법 2]--------------------------------------------------------------------
    
    time_t s2=clock();    //실행 시간 측정 시작
    
    printf("%d\n",f2(n));
    
    time_t e2=clock();
    printf("\n%f seconds\n",(float)(e2-s2)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    //[방법 3]--------------------------------------------------------------------
    
    time_t s3=clock();    //실행 시간 측정 시작
    
    printf("%d\n",f3(n));
    
    time_t e3=clock();
    printf("\n%f seconds\n",(float)(e3-s3)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
