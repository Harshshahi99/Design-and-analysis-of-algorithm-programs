//
//  main.c
//  Quick_Sort
//
//  Created by Harsh vikram Shahi on 29/09/21.
//

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Exch(int *p,int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
    
}
void QuickSort(int a[],int low,int high)
{
    int i,j,key;
    if(low>=high)
        return;
    key=low;
    i=low+1;
    
    j=high;
    while(i<=j)
    {
        while(a[i]<=a[key])
            i=i+1;
        while(a[j]>a[key])
            j=j-1;
        if(i<j)
            Exch(&a[i],&a[j]);
    }
    Exch(&a[j],&a[key]);
    QuickSort(a,low,j-1);
    QuickSort(a,j+1,high);
}
int main()
{
    int n,a[10000],k;
    //double clock_tst;
    double et;
    double st,ts;
    //clrscr();
    
    printf("\n Enter How many Numbers: ");
    scanf("%d", &n);
    printf("\nThe Random Numbers are:\n");
    for(k=1; k<=n; k++){
    a[k]=rand();
    printf("%d\t",a[k]);
    }
    st=clock();
    QuickSort(a, 1, n);
    et=clock();
    ts=(double)(et-st)/CLOCKS_PER_SEC;
    printf("\nSorted Numbers are: \n ");
    for(k=1; k<=n; k++)
    printf("%d\t", a[k]);
    printf("\nThe time taken is %e",ts);
}
