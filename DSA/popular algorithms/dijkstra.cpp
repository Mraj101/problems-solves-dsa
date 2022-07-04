#include <stdio.h>    //header file
#define INFINITY 9999 // 9999 defined as infinity
#define MAX 10        // max is defined with 10

// void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start)
{
    int cost[MAX][MAX], distance[MAX], pred[MAX];         // declared arrays
    int visited[MAX], count, mindistance, nextnode, i, j; // array and variables

    // Creating cost matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (Graph[i][j] == 0)
                cost[i][j] = INFINITY;
            else
                cost[i][j] = Graph[i][j];

    for (i = 0; i < n; i++) // setting the distance
    {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while (count < n - 1)
    {
        mindistance = INFINITY;

        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    // Printing the distance
    for (i = 0; i < n; i++)
        if (i != start)
        {
            printf("\nDistance from source to %d: %d", i, distance[i]);
        }
}
int main()
{
    int n, u; // varibale declared where n is the size and u is the initial cost
    n = 7;

    int Graph[7][7] = // the cost adjacency is declared
        {
            {0, 0, 1, 2, 0, 0, 0},
            {0, 0, 2, 0, 0, 3, 0},
            {1, 2, 0, 1, 3, 0, 0},
            {2, 0, 1, 0, 0, 0, 1},
            {0, 0, 3, 0, 0, 2, 0},
            {0, 3, 0, 0, 2, 0, 1},
            {0, 0, 0, 1, 0, 1, 0}};
    u = 2;                 // initial cost is 2
    Dijkstra(Graph, n, u); // calling dijkastra funcion with 3 arguments

    return 0;
}
