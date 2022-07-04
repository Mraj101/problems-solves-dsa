#include <stdio.h> //header file

int queue1[10], front = -1, back = -1, size = 10; // array queue1 initialized
// initially the queue is empty

int isFull() // checks wheather the queue is full
{
    if (back >= size - 1)
        return 1;
    else
        return 0;
}

int isEmpty() // chechk whether the queus is empty
{
    if (back == front)
        return 1;
    else
        return 0;
}
void enqueue(int value) // inserts element in the queue
{
    if (isFull())
        printf("Queue is full.\n");
    else
    {
        back++;
        queue1[back] = value;
    }
}
void dequeue() // removes element from the queue
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

    int graph1[7][7] = // adjacency matrix from the graph
        {
            {0, 1, 1, 1, 0, 0, 0},
            {1, 0, 0, 1, 0, 0, 0},
            {1, 0, 0, 1, 1, 0, 0},
            {1, 1, 1, 0, 1, 0, 0},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 1, 0, 0}

        };

    int i = 0;                              // set i to the starting vertex
    int visited[7] = {0, 0, 0, 0, 0, 0, 0}; // set the visited vertexes to zero at first
    visited[i] = 1;                         // first vertex is visited
    enqueue(i);                             // as the vertex is visited insert in in the queue
    printf("The out put is\n%d ", i);       // printing the visited vertex

    while (isEmpty() == 0) // while the queue is not empty continue
    {
        int node = queue1[front + 1];
        dequeue();                  // dequeue the fully visited node from queue
        for (int j = 0; j < 7; j++) // for adjacent matrices
        {
            if (graph1[node][j] == 1 && visited[j] == 0) // if there is and adjacent edge and the vertex/node is not visited

            {
                printf("%d ", j); // thean print the adjacent node
                enqueue(j);       // insert it in the queue
                visited[j] = 1;   // mark it as visited
            }
        }
    }
    return 0;
}
