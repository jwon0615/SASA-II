#include <stdio.h>
#include <algorithm>

int n, k, a[100];


int find(int s, int e, int k) //시작값, 종단값, 탐색값
{
    while(s<=e)
    {
        int m=(s+e)/2;
        if(a[m]==k) return m;
        else if(a[m]>k) e=m-1;
        else s=m+1;
    }
    return -1;
}

int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",a+i);
    scanf("%d", &k);
    printf("%d ",find(0,n-1,k)+1);
        return 0;
}
