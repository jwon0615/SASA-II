//이진 암호화

#include <cstdio>

int n;
char S[64];

void f(int k, int s){
    int sum=0;
    if(s==1){
        printf("%c", S[k]);
        return;
    }
    for(int i=k; i<k+s; i++)
        sum += (S[i]=='1');
      //sum += (S[i]-'0');
    if(sum == 0 || sum == s)
        printf("%d", sum!=0);
      //printf("%d, (bool)sum);
    else{
        printf("-");
        f(k, s/2);
        f(k+s/2, s/2);
    }
}

int main(){
    scanf("%d %s", &n ,S);
    f(0,n);
    return 0;
}
