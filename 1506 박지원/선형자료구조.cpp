#include <stdio.h>

int n, arr[101];

int main()
{
    int index=0;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    for(int i=0; i<n; i++)
        if(arr[i]>arr[index])
            index=i;
    
    printf("%d %d\n",arr[index],index+1);
    
    return 0;
}
