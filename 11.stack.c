#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, stk[SIZE];
void push();
void pop();
void peek();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.peek\n4.Show\n5.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
        	peek();
        	break;
            	
        case 4:
            show();
            break;
        case 5:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nstack is full");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        stk[top] = x;
    }
}

void pop()
{
	int x;
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        x=stk[top];
        top = top - 1;
        printf("\nPopped element: %d", x);
    }
}
void peek(){
    int x = stk[top];
    printf("%d is the top most element of the stack\n", x);
    
}

void show()
{
    if (top == -1)
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", stk[i]);
    }
}
