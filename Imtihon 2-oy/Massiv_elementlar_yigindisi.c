#include <stdio.h>
int arr[5] = {0};
int yigindi = 0;

int main()
{
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &arr[j]);
    }

    for (int i = 0; i < 5; i++)
    {
        yigindi += arr[i];
    }

    printf("Yig'indi: %d\n", yigindi);
    return 0;
}
