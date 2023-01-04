// Sparse matrix

// Algorithm
/*
1. start
2. read number of rows and cols as R and C
3. initialize SIZE= 0, K= 0
3. read the elements to the matrix S
	 3.1. if element read is a non zero number, increment SIZE by 1
4. initialize sparse matrix M with order 3xSIZE
5. repeat step 6 until all the elements in the matrix S is visited
6. if current element is a non zero number,
	 6.1. set M[0][K] as row of the element
	 6.2. set M[1][K] as col of the element
	 6.3. set M[3][K] as the current element
	 6.4. increment K by 1
7. print matrix M as minimized matrix
8. stop
 */
#include<stdio.h>
void main()
{
    int a[20][20],p[3][20], i,j,n,m,k=0;
    printf("enter the size of the row and the column  ");
    scanf("%d%d",&n,&m);
    printf("Enter the array \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("entered matrix Are \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
   
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {        
          if(a[i][j]!=0) 
          {
            p[0][k]=i+1;               
            p[1][k]=j+1;  
            p[2][k]=a[i][j]; 
            k++;
          }
        }
    }
    printf("\nthe trplet rep of the matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d   ",p[i][j]);
        }
        printf("\n");
    }     
    
}