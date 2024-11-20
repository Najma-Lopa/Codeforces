#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int element;
    scanf("%d",&element);
    int first,last;
    first=0;
    last=n;
    int mid=(first+last)/2;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==element)
        {
            printf("The element is found: %d",mid+1);
            break;
        }
        else if(arr[mid]>element)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    if(last<first)
        printf("Not found");

}
