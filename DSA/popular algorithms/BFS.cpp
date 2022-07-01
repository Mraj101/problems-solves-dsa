#include <stdio.h>

int queue1[10], front = -1, back = -1, size = 10;

void print()
{
    int i;
    for (i = front + 1; i <= back; i++)
        printf("%d ", queue1[i]);
    printf("\n");
}
int isFull()
{
    if (back >= size - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (back == front)
        return 1;
    else
        return 0;
}
void enqueue(int value)
{
    if (isFull())
        printf("Queue is full.\n");
    else
    {
        back++;
        queue1[back] = value;
    }
}
void dequeue()
{
    if (isEmpty())
        printf("Queue is empty.\n");
    else
    {
        front++;
    }
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
    visited[i] = 1;
    enqueue(i);
    printf("%d ", i);

    while (isEmpty() == 0)
    {
        int node = queue1[front + 1];
        dequeue();
        for (int j = 0; j < 7; j++)
        {
            if (graph1[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                enqueue(j);
                visited[j] = 1;
            }
        }
    }
    return 0;
}
