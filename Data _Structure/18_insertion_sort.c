// Insertion Sort

// Algorithm
/* 
1. start
2. read N as number of items
3. read N items into the array ARR 
4. set I = 1
5. while I < N, repeat steps 5 to 9
6. set KEY = ARR[I]
7. set J = I
8. while J>0 and KEY<ARR[J-1], 
	8.1. set ARR[J] = ARR[J-1]
	8.2. decrement J by 1
9. set ARR[J] = KEY
10. increment I by 1
11. print ARR as sorted array
12. stop
*/
#include<stdio.h>
void Insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1; i<n; i++)
    {
        key = a[i];
        for(j=i; j>0 && key < a[j-1]; j--)
        a[j]= a[j-1];
        a[j]= key;
    }
}
void main () 
{
    int i,n, a[40];
    printf("Enter the number of the elements : ");
    scanf("%d",&n);
    printf ("enter ur elements  : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    Insertionsort(a, n);
    printf("The sorted arays are ");
    for(i=0; i<n; i++)
        {
            printf("%d   ",a[i]);
        }
    getch();
}