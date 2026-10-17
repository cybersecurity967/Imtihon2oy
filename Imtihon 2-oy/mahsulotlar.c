#include <stdio.h>
#include <string.h>
struct Mahsulot
{
 char nomi[50];
 int narxi;
 int soni;
};

int main()
{
 struct Mahsulot m[5];
 int i;
 printf("mahsulot ma'lumotlarini kiriting:\n");
 for (i = 0; i < 5; i++)

    {
 printf("\n%d-mahsulot:\n", i + 1);
 printf("Nomi: ");
 scanf("%s %d %d", m[i].nomi, &m[i].narxi, &m[i].soni);
    }
 printf("\n--- Barcha mahsulotlar ro'yxati ---\n");
 for (i = 0; i < 5; i++)

    {
 printf("%d. Nomi: %s\n  Narxi: %d\n  Soni: %d\n",
i + 1, m[i].nomi, m[i].narxi, m[i].soni);
   }
int max_index = 0;
 for (i = 1; i < 5; i++)
    {
 if (m[i].narxi > m[max_index].narxi)

        {
 max_index = i;
        }
    }
 printf("\n--- Eng qimmat mahsulot ---\n");
 printf("Nomi: %s | Narxi: %d | Soni: %d\n",
m[max_index].nomi, m[max_index].narxi, m[max_index].soni);
char qidiruv_nomi[50];
int topildi = 0;
printf("\nQidirilayotgan mahsulot nomini kiriting: ");
scanf("%s", qidiruv_nomi);
for (i = 0; i < 5; i++)

    {
 if (strcmp(m[i].nomi, qidiruv_nomi) == 0)
        {
 printf("Mahsulot topildi! Narxi: %d, Soni: %d\n", m[i].narxi, m[i].soni);
 topildi = 1;
 break;
     }
    }
 if (!topildi)
    {
 printf("Bunday nomdagi mahsulot topilmadi.\n");
    }
 FILE *fayl = fopen("mahsulotlar.txt", "w");
 if (fayl == NULL)
    {
        printf("Xatolik: Faylni ochib bo'lmadi!\n");
return 1;
    }
 fprintf(fayl, "--- Mahsulotlar ro'yxati ---\n");
 for (i = 0; i < 5; i++)
    {
 fprintf(fayl, "%d. Nomi: %s, Narxi: %.2f, Soni: %d\n",
 i + 1, m[i].nomi, m[i].narxi, m[i].soni);
    }
 fprintf(fayl, "\nEng qimmat mahsulot: %s (%.2f)\n",
 m[max_index].nomi, m[max_index].narxi);
 fclose(fayl);
 printf("\nMa'lumotlar 'mahsulotlar.txt' fayliga saqlandi!\n");
 return 0;
}