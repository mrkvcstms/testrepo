#include <stdio.h>
#include "my_age_func.h"
#include "cheer.h"

void greet(char *name, char *name1);

int main() {
    count(4);

    char othername[] = "Levi von ";
    char name[] = "Leviland";
    greet(othername, name);

    cheer('b', 3);
    printf("Hello, World!\n");
    return 0;
}


void greet(char *name, char *name1)
{
    printf("GHello, Hello, Sziasztok\n");
    printf("Hello %s%s!\n", name, name1);
    printf("Greetings!\n");
}