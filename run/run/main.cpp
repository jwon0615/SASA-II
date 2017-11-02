#include <stdio.h>

int n, m;
int map[11][11], visit[11]; // 인접 행렬과 방문 여부를 나타내는 배열

void DFS(int s, int e)
{
    if(s==e) printf("%d", e);
    int i;
    
    visit[s] = 1; // 정점 v를 방문했다고 표시
    for (i = 1; i <= n; i++)
    {
        // 정점 v와 정점 i가 연결되었고, 정점 i를 방문하지 않았다면
        if (map[s][i] == 1&&!visit[i])
        {
            if(!visit[i]){
                printf("%d %d\n", s, i);
                DFS(i, e);
            }
            else
                DFS(i, e);
        }
    }
}

int main()
{
    int start, end;
    int v1, v2;
    
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<m; i++){
        scanf("%d %d", &v1, &v2);
        map[v1][v2]=map[v2][v1]=1;
    }
    
    scanf("%d %d", &start, &end);
    DFS(start, end); // DFS 시작!
    
    return 0;
}
