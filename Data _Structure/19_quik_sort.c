// Quick Sort

// Algorithm
/* 
1. start
2. read N elements into the array ARR
3. set BEG as 0 & END as N-1
4. if beg > end, return
5. set PIVOT as last element in the ARR
6. set I as BEG-1 & J as BEG
7. while J <= END-1, repeat steps 8 to 10
8. increment I by 1
9. if ARR[J] < PIVOT, swap ARR[I] & ARR[J]
10. increment J by 1
11. swap ARR[I+1] & ARR[END]
12. set INDEX as I+1
13. set END as INDEX - 1 & goto step 4
14. set BEG as INDEX + 1 & goto step 4
15. print ARR as sorted array
16. stop
*/
#include <stdio.h>
void swap(int *x, int *y)
{
    int t;
    t= *x;
    *x = *y;
    *y =t;
}
void quick_sort(int arr[], int beg, int end)
{
    int pivot= arr[end], i =beg-1, j, pi;
    if (beg>end)
        return;
    for(j= beg, j<=end-1 , j++)
        if (arr[j] < pivot)
           

}
void main()
{
    int i, n, array[25];
    printf("Enter the size  : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++)
        scanf("%d", &array[i]);
    quick_sort(array, 0, n-1);
    printf("The sorted order is : ");
    for(i=0; i<n ; i++)
        printf("%d ",array[i]);
    getch();
}