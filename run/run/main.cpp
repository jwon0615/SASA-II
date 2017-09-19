//upper bound ( binary )

#include <stdio.h>
#include <algorithm>
#include <time.h> //cplusplus.com

int a[1000001];

int length, k[10001], l[10001], n;

//upper bound
int ub(int s, int e, int k){ //시작값, 종단값, 탐색값
    while(s<e){
        int m=(s+e)/2;
        if(a[m]>k) e=m;
        else s=m+1;
    }
    return e+1;
}

//lower bound
int lb(int s, int e, int k){ //시작값, 종단값, 탐색값
    while(s<e){
        int m=(s+e)/2;
        if(a[m]>=k) e=m;
        else s=m+1;
    }
    return e+1;
}


int main(){
    scanf("%d",&length);
    for(int j=0; j<length; j++){
        scanf("%d", a+j);
    }
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d %d", k+i,l+i);
    }
    
    time_t s=clock();    //실행 시간 측정 시작
    
    for(int i=0; i<n; i++){
        printf("%d %d\n",ub(0,n,l[i]),lb(0,n,k[i]));
        printf("%d\n",ub(0,n,l[i])-lb(0,n,k[i]));
    }
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
