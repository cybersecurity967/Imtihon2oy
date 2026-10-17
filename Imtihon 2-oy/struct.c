#include <stdio.h>
struct Talaba
{
    char ism[50];
    int yosh;
    int ball;
};
int main(){
    struct Talaba t1;

    scanf("%s", t1.ism);
    scanf("%d", &t1.yosh);
    scanf("%d", &t1.ball);

    printf("Ismi: %s\n", t1.ism);
    printf("Yoshi: %d\n", t1.yosh);
    printf("To'plagan bali: %d\n", t1.ball);

    return 0;
}