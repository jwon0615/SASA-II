//upper bound ( binary )

#include <stdio.h>
#include <time.h> //cplusplus.com

int a[101];

int ub(int s, int e, int k){ //시작값, 종단값, 탐색값
    while(s<e){
        int m=(s+e)/2;
        if(a[m]>k) e=m; //lower bound에서는 조건문이 a[m]>=k
        else s=m+1;
    }
    return e+1;
}

int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    for(int j=0; j<n; j++){
        scanf("%d", a+j);
    }
    time_t s=clock();    //실행 시간 측정 시작
    
    printf("%d",ub(0,n,k));
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
