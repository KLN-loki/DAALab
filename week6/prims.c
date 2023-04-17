
#include <stdio.h>
#include <stdbool.h>
#define I 9999999
#define v 5
int G[v][v] = {
    {0, 9, 75, 0, 0},
    {9, 0, 95, 19, 42},
    {75, 95, 0, 51, 66},
    {0, 19, 51, 0, 31},
    {0, 42, 66, 31, 0}};
int main()
{
    int edge;
    int selected[v];
    memset(selected, false, sizeof(selected));
    edge = 0;
    selected[0] = true;
    int row_num;
    int column_num;
    printf("Edge : Weight\n");
    while (edge < v - 1)
    {
        int min = I;
        row_num = 0;
        column_num = 0;
        for (int i = 0; i < v; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < v; j++)
                {
                    if (!selected[j] && G[i][j])
                    {
                        if (min > G[i][j])
                        {
                            min = G[i][j];
                            row_num = i;
                            column_num = j;
                        }
                    }
                }
            }
        }
        printf("%d - %d : %d\n", row_num, column_num, G[row_num][column_num]);
        selected[column_num] = true;
        edge++;
    }
    return 0;
}

