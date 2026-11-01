#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "glyphs.h"

const short MAX_PHRASE_LEN = 32;

void printhlp() {
    printf("asg - ANSI art generator\n");
    printf("  Usage: asg [PHRASE]\n");
    printf("[PHRASE] - text which is not longer than 32 symbols.\n");
}

int main(int argc, char *argv[]) {
    if (argc == 1 || (argc > 1 && strlen(argv[1]) > MAX_PHRASE_LEN)) {
        printhlp();
        return 0;
    }

    const int phrlen = strlen(argv[1]);
    char phrase[phrlen];
    for (short i = 0; i < phrlen; i += 1) {
        phrase[i] = tolower(argv[1][i]);
    }

    const char **res[phrlen];
    for (short phrch = 0; phrch < phrlen; phrch += 1) {
        res[phrch] = chtogl(phrase[phrch]);
    }
    for (short gline = 0; gline < GLYPH_HEIGHT; gline += 1) {
        for (short phrch = 0; phrch < phrlen; phrch += 1) {
            printf("%s", res[phrch][gline]);
        }
        printf("\n");
    }

    return 0;
}
