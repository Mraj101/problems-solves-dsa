#include <stdio.h>

int stack1[80], top = -1, size = 80; // initialize stack and it's size 80 globally

int isEmpty() // checks wheather the stack is empty
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull(int size, int top) // checks weather the stack is full
                              // which takes two parameter one is the size of the stack
                              // other is position top in the stack

{
    if (top >= size - 1)
        return 1;
    else
        return 0;
}

void push(int value) // inserts item into the stack from top
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

void pop() // removes element from the stack from top
{
    if (isEmpty())
    {
        printf("Nothing to pop.\n");
    }
    else
        top = top - 1;
}

int main() // main funciton
{
    int graph1[7][7] = // the adjacent matrix from the graph we are to
                       // determine DFS

        {
            {0, 1, 1, 1, 0, 0, 0},
            {1, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 1, 1, 0, 0},
            {1, 1, 1, 0, 1, 0, 0},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 1, 0, 0}};

    int i = 0;                              // select the first node
    int visited[7] = {0, 0, 0, 0, 0, 0, 0}; // set all visited to 0
                                            // as no nodes have been visited
                                            // yet
    push(i);                                // now insert the first node in the stack
    visited[i] = 1;                         // mark it as visited
    printf("DFS    :%d ", i);               // print the visited node
    while (isEmpty() == 0)                  // when the stack is not
                                            // empty
    {
        int node = stack1[top]; // The first node that is to be fully visited
        int check = 0;          // check default is 0 which means not visited

        for (int j = 0; j < 7; j++)
        {
            if (graph1[node][j] == 1 && visited[j] == 0) // if the node is adjacent and not visited yet
            {
                printf("%d ", j); // print the adjacent node
                push(j);          // insert it in the stack
                visited[j] = 1;   // mark the node as visited
                check = 1;        // set check to 1 means the node is fully visited
                break;            // break out from loop
            }
        }
        if (check == 0) // if all items are already visited pop the node from staack
            pop();
    }
    return 0;
}
