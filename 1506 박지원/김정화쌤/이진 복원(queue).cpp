//이진 복원(QUEUE)

#include <cstdio>
#include <queue>

using namespace std;

queue<char> Q;
char S[1<<19];
int n, p;

void f(int k, int s, char v){
    if(Q.empty())
        return;
    if(v=='-'){
        Q.pop();
        f(k, s/2, Q.front());
        Q.pop();
        f(k+s/2, s/2, Q.front());
    }
    else{
        for(int i=k; i<k+s; i++)
            S[i]=v;
    }
}

int main(){
    scanf("%d %s", &n, S);
    for(int i=0; S[i]; i++)
        Q.push(S[i]);
    f(0, n, Q.front());
    printf("%s", S);
}
