#include <stdio.h>
#include <algorithm>

int n, arr[101];

int main()
{
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    std::sort(arr,arr+n-1);
    
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    
    return 0;
}
