#include <stdio.h>
#include "my_age_func.h"
#include "cheer.h"

void greet();

int main() {
    count();
    cheer();
    printf("Hello, World!\n");
    return 0;
}


void greet()
{
    printf("Hello Tamas!\n");
}