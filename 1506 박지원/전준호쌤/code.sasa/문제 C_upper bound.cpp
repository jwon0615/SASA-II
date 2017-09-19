//문제 설명
//n개로 이루어져 있는 정수 배열에서, 원하는 수 k를 초과하는 수가 처음으로 등장하는 위치를 m번 찾아 출력하는 프로그램을 작성하시오.
//
//입력
//첫줄에 정수의 입력받을 개수 n(1~1,000,000),  찾고자 하는 수의 개수 m(1~10)이 입력된다.
//두번째 줄에 n개의 정수(1~1,000,000,000)가 공백으로 구분되어 입력된다.
//세번째 줄에 m개의 찾고자 하는 정수 k(1<=k<=1,000,000,000)가 공백으로 구분되어 입력된다.
//단, 입력되는 정수의 집합은 오름차순으로 정렬되어 있고, 같은 숫자가 있을 수 있다.
//하지만 찾고자 하는 수 k의 집합은 정렬되어 있지 않다.
//
//출력
//처음 입력받은 정수 집합에서 원하는 수 k를 초과하는 수가 처음으로 등장하는 위치를 공백으로 구분하여 m번 출력한다.
//만약 모든 원소가 k보다 작으면 n+1을 출력한다.


#include <stdio.h>

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
