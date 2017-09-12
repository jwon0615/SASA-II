//영역 구분

#include <stdio.h>
#include <time.h> //cplusplus.com

int s[1<<7][1<<7], n, gray, white;

void f(int a, int b, int n){
    bool isOne=1;
    for(int i=a; i<a+n; i++)
        for(int j=b; j<b+n; j++)
            if(s[a][b]!=s[i][j])
                isOne=0;
    if(isOne){
        if(s[a][b]==1) white++;
        else gray++;
        return;
    }
    else{
        f(a,b,n/2);
        f(a+n/2,b,n/2);
        f(a, b+n/2, n/2);
        f(a+n/2, b+n/2, n/2);
    }
}

int main(){
    
    FILE *in = fopen("input.txt", "r"); //입력 파일 지정
    FILE *out = fopen("output.txt", "w"); //출력 파일 지정
    int i,j;
    fscanf(in, "%d",&n);
   
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            fscanf(in, "%d", &s[i][j]);
    
    time_t s=clock();    //실행 시간 측정 시작
    
    f(0,0,n);
    fprintf(out, "%d\n%d\n", gray, white);
    
    time_t e=clock();
    printf("\n%f seconds\n",(float)(e-s)/CLOCKS_PER_SEC); //실행 시간 측정 완료
    
    return 0;
}
