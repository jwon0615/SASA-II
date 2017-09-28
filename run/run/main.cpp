#include <stdio.h>

int n, k, a[10000], b[10000], arr[500000];

int lb(int s, int e, int k){ //시작값, 종단값, 탐색값
    while(s<e){
        int m=(s+e)/2;
        if(arr[m]>=k) e=m;
        else s=m+1;
    }
    return e+1;
}

int ub(int s, int e, int k){ //시작값, 종단값, 탐색값
    while(s<e){
        int m=(s+e)/2;
        if(arr[m]>k) e=m;
        else s=m+1;
    }
    return e+1;
}

int main(){
    //입력
    scanf("%d", &n); //첫 줄에 배열의 길이 n (2 ≤ n ≤ 500,000)
    for(int i=0; i<n; i++) //두 번째 줄부터 n개의 수 (0 ≤ 수 ≤ 500,000)
        scanf("%d", arr+i);
    scanf("%d", &k); //세 번째 줄에 두 수가 입력되는 횟수 z (1 ≤ k ≤ 10,000)
    for(int i=0; i<k; i++) //네 번째 줄부터 k줄에 걸쳐 두 수 a, b (-1,000,000 ≤ a ≤ b ≤ 1,000,000)
        scanf("%d %d", a+i, b+i);
    
    //출력
    for(int i=0; i<k; i++) //k줄에 걸쳐 입력받은 두 수 사이(두 수 포함)에 있는 숫자의 갯수
       printf("%d\n", ub(0,n,b[i])-lb(0,n,a[i]));
}
