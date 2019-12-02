#include <stdio.h>
#include "my_age_func.h"
#include "cheer.h"

void greet(char *name);

int main() {
    count();
    cheer();
    char name[] = "Levi";
    greet(name);
    printf("Hello, World!\n");
    return 0;
}


void greet(char *name)
{
    printf("Hello %s!\n", name);
}