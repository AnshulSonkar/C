#include <stdio.h>

#define DEBUG

int main() {

#ifdef DEBUG
    printf("Debug Mode ON");
#endif

    return 0;
}