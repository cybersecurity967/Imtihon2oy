#include <stdio.h>

int engKatta(int m[3][3])
{
    int max = m[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] > max)
                max = m[i][j];
        }
    }
    return max;
}
int main(void)
{
    int m[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
    }
    for (int i = 0; i < 3; i++)
    {
        int yigindi = 0;
        for (int j = 0; j < 3; j++)
        {
            yigindi += m[i][j];
        }
        printf("%d-satr yig'indisi: %d\n", i + 1, yigindi);
    }
    printf("Eng katta element: %d\n", engKatta(m));
    return 0;
}