#include <stdio.h>
int main()
{
    FILE *f = fopen("matn.txt", "w");
    if (f == NULL)
    {
        return 1;
    }
    if (fputs("Salom, C dasturlash!", f) == EOF)
    {
        fclose(f);
        return 1;
    }
    if (fclose(f) == EOF)
    {
        return 1;
    }
    printf("Matn faylga yozildi.\n");
}
