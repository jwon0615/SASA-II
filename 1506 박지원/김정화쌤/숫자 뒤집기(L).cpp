//숫자 뒤집기(L)
#include <cstdio>
#include <math.h>
#include <time.h>

int DT[100001];

int f1(int n){
    if(!DT[n]){
        if(n<10)
            DT[n]=n;
        else
        DT[n]=f1(n/10)+(n%10)*powf(10.0,(int)log10((double)n));
     }
    return DT[n];
}

int f2(int n){
    if(n<10)
        return n;
    
    return f2(n/10)+(n%10)*powf(10.0,(int)log10((double)n));
}

int main(){
    int n;
        while(n>0){

            scanf("%d", &n);
    
            time_t s = clock();
    
            printf("%d\n", f1(n));
    
            time_t e=clock();
            printf("상향식 : ");
            printf("%fseconds\n", (float)(e-s)/CLOCKS_PER_SEC);
    
            time_t s2 = clock();
           
            f2(n);
            time_t e2=clock();
            printf("하향식 : ");
            printf("%fseconds\n\n", (float)(e2-s2)/CLOCKS_PER_SEC);
    }
    
    return 0;
    
}
