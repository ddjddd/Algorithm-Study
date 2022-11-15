#include <stdio.h>

int main(int argc, char **argv) {
    char buffer[200];

    while (gets(buffer)) {
        puts(buffer);
    }

    return 0;
}
