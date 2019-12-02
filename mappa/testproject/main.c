#include <stdio.h>
#include "my_age_func.h"
#include "cheer.h"

void greet(char *name);

int main() {
    count();

    char name[] = "Levi";
    greet(name);
    cheer('b', 3);
    printf("Hello, World!\n");
    return 0;
}


void greet(char *name)
{
    //printf("Hello %s!\n", name);
    printf("Greetings!\n");
}