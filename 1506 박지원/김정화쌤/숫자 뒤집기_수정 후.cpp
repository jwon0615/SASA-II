//숫자 뒤집기
//수정 전

#include <stdio.h>
#include <time.h> //cplusplus.com

bool first=1;

void solve(int n){
    if(n==0) return;
    if(first && (n%10)==0)
        solve(n/10);
    else{
        printf("%d", n%10), first=0;
        solve(n/10);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    
    time_t s=clock();    //실행 시간 측정 시작
    
    solve(n);
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
