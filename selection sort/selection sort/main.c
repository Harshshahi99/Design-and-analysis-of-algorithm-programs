//
//  main.c
//  selection sort
//
//  Created by Harsh vikram Shahi on 24/12/21.
//
#include<stdio.h>
int main()
{
    int i,n,min,j;
    int arr[100];
    printf("Enter the number of element you  want in array");
    scanf("%d",&n);
    printf("Enter the elements in array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
    for(j=i+1;j<n;j++)
    
        if(arr[j]<arr[min])
        
            min=j;
            
    if(min!=i)
        printf("\nItem swapped %d and %d\n",arr[i],arr[min]);
        int temp =arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        
    }
    printf("The Sorted array are:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    
    return 0;

}
