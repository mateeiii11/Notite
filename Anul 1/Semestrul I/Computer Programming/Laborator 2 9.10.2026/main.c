#include <stdio.h>

void task3_4(void)
{
    for(char c = 'a'; c <= 'z'; c++)
        printf("%d ", c);
    printf("\n");
}

void task3_5(void)
{
    for(int i = 32; i <= 126; i++)
        printf("%c ", i);
    printf("\n");
}

void task3_6(void)
{
    char s[150] = {0};
    fgets(s, sizeof(s), stdin);
}

void task3_7(void)
{
    char c;
    scanf("%c", &c);
    if(c < 'a' || c > 'z') return;
    printf("%c\n", c - 32);
}

void task3_8(void)
{
    char *s = NULL;
    size_t size = 0;
    getline(&s, &size, stdin);
    for(; *s != '\0'; s++)
        if(*s != '\n')
            printf("%c", *s + 32);
}

void task3_10(void)
{
    double n = 3.14159265;
    printf("%f - %lf - %Lf\n", n, n, n);
}
int main(void)
{
    //task3_4();
    //task3_5();
    //task3_6();
    //task3_7();
    //task3_8();
    task3_10();
    return 0;
}
