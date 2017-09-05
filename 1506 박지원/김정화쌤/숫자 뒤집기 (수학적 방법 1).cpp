//숫자 뒤집기 (수학적 방법 1)

#include <stdio.h>
#include <cmath>

int f(int n) {
    if(n<10) return n;
    return f(n/10)+(n%10)*powf(10.0,(int)log10((double)n));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
