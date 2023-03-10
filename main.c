#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"

typedef char *string;

int main(int argc, string argv[])
{
    int n;
    char name[13];
    string exeName = argv[0];
    scanf("%12[^\n]s", name);
    printf("%s\n", exeName);
    printf("%s\n", name);
    for (int i = 0; i < argc; i++)
    {
        printf("Command line argument %d is %s\n", i + 1, argv[i]);
    }
    while (scanf("%d", &n) > 0)
    {
        long fac = factorial(n);
        printf("%d! = %ld\n", n, fac);
    }
    return 0;
}
