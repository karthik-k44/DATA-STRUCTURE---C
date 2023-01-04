// Implement stack using array

// Algorithm
/*
1. start
2. create stack STACK using array with size, SIZE
3. initialize TOP as -1
4. For insertion (PUSH)
	4.1. if TOP < SIZE-1
		4.1.1. read item to be inserted as ITEM
		4.1.2. increment TOP by 1
		4.1.3. set STACK[TOP] as ITEM
	4.2. else, print "Stack Overflow"
5. For deletion (POP)
	5.1. if TOP not equal to -1
		5.1.1. return STACK[TOP] and decrement TOP by 1
	5.2. else, print "Stack Underflow"
6. To print stack
	6.1. set I=TOP
	6.2. while I>=0
		6.2.1. print STACK[I]
		6.2.2. decrement I by 1
7. stop
 */
#include<stdio.h>
int stack[30], size, top =-1;
void push()
{
    int item;
    if(top< size-1)
    {
        printf("Enter the value to be Pushed");
        scanf("%d",&item);
        stack[++top]= item;
        printf("\n \t Pushed element : %d", stack[top]); 
    }
    else
        printf("\n\n\t Stack overflow!");
} 
void pop()
{
    if (top != -1)
        printf("\n\t Popped element : %d", stack[top--]);
    else
        printf("\n\n\t Stack underflow");
}
void display()
{
    int i;
    if (top == -1)
        printf("\n Stack is empty! ");
    else
    {
        printf("STACK");
        for(i=top; i>= 0; i--)
            printf("\n %d", stack[i]);
    }
}
int main()
{
    int choice;
    printf("Enter the size of the stack : ");
    scanf("%d", &size);
    do 
    {   
        printf( "choose from below \n\t 1. PUSH  \n\t 2.POP \n\t 3. DISPLAY \n\t 4. EXIT \n\t ->" );
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exit point....") ; break;
            default: printf("Invalid option..."); break;
        }
    } while (choice != 4);
    getch();
    return 0;
}