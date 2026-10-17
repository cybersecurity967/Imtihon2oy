#include <stdio.h>
int m[2][3];
int Yigindi = 0;

int main(){

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
            scanf("%d", &m[i][j]);
        Yigindi += m[i][j];
    }

}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
        printf("%d ", m[i][j]);
    printf("\n");
}
printf("Yigindi: %d", Yigindi);
}