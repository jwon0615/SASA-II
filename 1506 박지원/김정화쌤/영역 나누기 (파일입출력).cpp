//영역 나누기 (파일입출력)

#include <cstdio>

int P[1<<7][1<<7], n;

bool isOne(int a, int b, int s, int v){
    for(int i=a; i<a+s; i++)
        for(int j=b; j<b+s; j++)
            if(P[i][j]!=v) return 0;
    return 1;
}

int f(int a, int b, int s, int v){
    if(s==1) return P[a][b]==v;
    if(isOne(a,b,s,v)) return 1;
    return f(a,b,s/2,v)+f(a+s/2,b,s/2,v)+f(a,b+s/2,s/2,v)+f(a+s/2,b+s/2,s/2,v);
}

int main(){
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");
    
    fscanf(in,"%d",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            fscanf(in, "%d", &P[i][j]);
    fprintf(out, "%d\n%d\n", f(0,0,n,0), f(0,0,n,1));
}
