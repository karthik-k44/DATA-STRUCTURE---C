// Pattern matching algorithm

// Algorithm
/*
1.  start
2.  read text as TXT & pattern to be searched as PAT
3.  compute length of TXT as TXTLEN & length of PAT as PATLEN
4.  set i=0
5.  while i <= TXTLEN-PATLEN, repeat steps 6 to 11
6.  set j=0
7.  while j < PATLEN, repeat steps 8 to 10
8.  if TXT[i+j] not equal to PAT[j], break
9.  if j=PATLEN-1, print i as index of pattern
10. increment j by 1
11. increment i by 1
12. stop
*/
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,txtlen, patlen;
    char txt[50],pat[40];
    printf("enter ur text  ");
    gets(txt);
    printf("enter ur pattern  ");
    gets(pat);
    patlen = strlen(pat);
    txtlen = strlen(txt);
    for(i=0; i<=txtlen-patlen;i++)
    {
        for(j=0; j<patlen; j++)
        {
            if(txt[i+j]!=pat[j])
                break;
            if (j==patlen-1)            
            {
                printf ("pattern found at %d", i+1);
                return;
            }
        }
    }
    printf("pattern not found");
}



