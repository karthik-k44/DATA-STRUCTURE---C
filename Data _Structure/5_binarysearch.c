// Binary search

// Algorithm
/*
1. start
2. read sorted items into array ARR
3. read the item to be searched as ITEM
4. set BEG as index of first element and END as index of last element
5. if BEG>END,
	 6.1. print "ITEM NOT FOUND", goto step 10
6. compute MID as floor value of (BEG+END)/2
7. if ITEM = ARR[MID]
	 7.1. print MID+1 as the location of the ITEM, goto step 10
8. else if ITEM < ARR[MID]
	 8.1. set END as MID-1
	 8.2. goto step 5
9. else
	 9.1. set BEG as MID+1
	 9.2. goto step 5
10. stop
*/
#include<stdio.h>
#include<conio.h>
int binary_search(int[],int ,int, int);

void main()
{
    int a[20],i,n,loc,item;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the item to be searched ");
    scanf("%d",&item);
    loc = binary_search(a,0,n-1,item);
    printf("the position of item  %d ",loc);
}
int binary_search(int a[], int beg,int end,int item)
{
    int mid;
    if (beg>end)
    {
        return -1;
    }
    mid =(beg+end)/2;
    if(a[mid]==item)
    {
        return mid+1;
    }
    else if (item<a[mid])
    {
        binary_search(a,beg,mid-1,item);
    }
    else 
    {
        binary_search(a,mid+1,end,item);
    }
}