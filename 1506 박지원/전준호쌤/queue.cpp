#include <stdio.h>
#include <queue>

using namespace std;

queue<char> q; //문자를 저장할 큐 q 준비

int main() {
    for( int i=0; i<5; i++)
        q.push((char)i+'A');
    while(!q.empty()) { //큐가 비어있지 않는 동안
        printf("%c ",q.front()); // 앞쪽 데이터 읽기
        q.pop(); // 앞쪽 데이터 버림
    }
    return 0;
}

//void bfs(char k) {
//    int i;
//    visit(k);
//    while(!q.empty()) {
//        for(i=0;i<n;i++)
//            if(a[q.front()-65][i] && !visited[i])
//                visit(i+65);
//        q.pop();
//    }
//}
