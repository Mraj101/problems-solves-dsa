#include <stdio.h>

int stack1[80], top = -1, size = 80;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top >= size - 1)
        return 1;
    else
        return 0;
}

void push(int value)
{
    if (isFull(size, top))
    {
        printf("Stack is full.\n");
    }
    else
    {
        top++;
        stack1[top] = value;
    }
}

void pop()
{
    if (isEmpty(top))
    {
        printf("Nothing to pop.\n");
    }
    else
        top = top - 1;
}

void printStack()
{
    int i;

    for (i = 0; i <= top; i++)
    {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}
int main()
{
    int graph1[7][7] =
        {
            {0, 1, 1, 1, 0, 0, 0},
            {1, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 1, 1, 0, 0},
            {1, 1, 1, 0, 1, 0, 0},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 1, 0, 0}};
    int i = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    push(i);
    visited[i] = 1;
    printf("%d ", i);

    while (isEmpty() == 0)
    {
        int node = stack1[top], check = 0;

        for (int j = 0; j < 7; j++)
        {
            if (graph1[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                push(j);
                visited[j] = 1;
                check = 1;
                break;
            }
        }
        if (check == 0)
            pop();
    }
    return 0;
}
