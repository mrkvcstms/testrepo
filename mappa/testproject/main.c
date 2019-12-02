#include <stdio.h>
#include "my_age_func.h"
#include "cheer.h"

void greet(char *name, char *name1);

int main() {
    count();

    char othername[] = "Levi von ";
    char name[] = "Leviland";
    greet(othername, name);
    cheer('b');
    printf("Hello, World!\n");
    return 0;
}


void greet(char *name, char *name1)
{
    printf("Hello %s%s!\n", name, name1);
    printf("Greetings!\n");
}