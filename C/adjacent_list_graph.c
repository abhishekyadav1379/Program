#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int vertex;
    struct node *next;
} node;
node *adj_list[20]; /* An array of pointers adj_list[i] is the head of the list of adjacency vertices of node i */

void main()
{
    int option;
    do
    {
        printf("\n A Program to represent a Graph by using an Adjacency List \n ");
        printf("\n 1. Directed Graph ");
        printf("\n 2. Un-Directed Graph ");
        printf("\n 3. Exit ");
        printf("\n\n Select a proper option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            dir_graph();
            break;
        case 2:
            undir_graph();
            break;
        case 3:
            exit(0);
        }
    } while (1);
}
int dir_graph()
{
    node *p;
    int n;
    int in_deg, out_deg, i, j;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        adj_list[i] = NULL;
    read_graph(n);
    printf("\n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
    for (i = 0; i < n; i++)
    {
        in_deg = out_deg = 0;
        p = adj_list[i];
        while (p != NULL)
        {
            out_deg++;
            p = p->next;
        }
        for (j = 0; j < n; j++)
        {
            p = adj_list[j];
            while (p != NULL)
            {
                if (p->vertex == i)
                    in_deg++;
                p = p->next;
            }
        }
        printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n", i, in_deg, out_deg, in_deg + out_deg);
    }
    return;
}
int undir_graph()
{
    node *p;
    int deg, i, j, n;
    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        adj_list[i] = NULL;
    read_graph(n);
    printf("\n Vertex \t Degree ");
    for (i = 0; i < n; i++)
    {
        deg = 0;
        p = adj_list[i];
        while (p != NULL)
        {
            deg++;
            p = p->next;
        }
        printf("\n\n %5d \t\t %d\n\n", i, deg);
    }
    return;
}
int read_graph(int n)
{
    int i, j;
    char reply;
    struct node *p, *c;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            printf("\n Vertices %d & %d are Adjacent ? (Y/N) :", i, j);
            fflush(stdin);
            scanf("%c", &reply);
            if (reply == 'y' || reply == 'Y')
            {
                c = (node *)malloc(sizeof(node));
                c->vertex = j;
                c->next = NULL;
                if (adj_list[i] == NULL)
                    adj_list[i] = c;
                else
                {
                    p = adj_list[i];
                    while (p->next != NULL)
                        p = p->next;
                    p->next = c;
                }
            }
        }
    }
    return;
}