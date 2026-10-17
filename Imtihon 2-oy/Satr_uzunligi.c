#include <stdio.h>
#include <string.h>
int main()
{
    char soz[100]; 
    scanf("%s", soz);
    int uzunlik = strlen(soz);
    printf("uzunligi: %d\n", uzunlik);
    return 0;
}