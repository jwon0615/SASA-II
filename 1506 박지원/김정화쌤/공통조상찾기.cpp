//distance of nodes

#include <stdio.h>
#include <time.h> //cplusplus.com

int m;

int f(int n, int m){
    if (n==m) return 0;
    else if(m>n) return f(n, m/2) + 1;
    else return f(n/2, m) + 1;
}

int main(){
    int n;
    scanf("%d %d",&n, &m);
    
    time_t s=clock();    //실행 시간 측정 시작
   
    printf("%d\n",f(n,m));
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
