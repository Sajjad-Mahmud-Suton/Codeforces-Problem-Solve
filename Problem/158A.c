#include<stdio.h>
int main()
{
    int n,i,k,num,value,count=0;
    scanf("%d %d",&n,&num);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
       
    }
    value = arr[num-1];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0 && arr[i]>=value)
        {
            count++;
        }
    }
    
    printf("%d",count);
}