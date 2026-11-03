#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "options.h"
#include "glyphs.h"

size_t ustrlen(const char *str) {
    size_t count = 0;
    while (*str != '\0') {
        if ((*str & 0xC0) != 0x80) {
            count += 1;
        }
        str += 1;
    }
    return count;
}

int main(int argc, char *argv[]) {
    const struct asg_options options = parseopts(argc, argv);

    const char **res[options.len];
    size_t reslen = 0;
    for (size_t i = 0; i < options.len; i += 1) {
        res[i] = chtogl(options.str[i]);
        reslen += ustrlen(res[i][0]);
    }

    int padding = 0;
    if (options.center && reslen < options.boundsw) {
        size_t freesp = options.boundsw - reslen;
        if (freesp % 2 != 0) {
            freesp -= 1;
        }
        padding = freesp / 2;
    }

    for (size_t gline = 0; gline < GLYPH_HEIGHT; gline += 1) {
        printf("%*s", padding, "");
        for (size_t i = 0; i < options.len; i += 1) {
            printf("%s", res[i][gline]);
        }
        printf("\n");
    }

    free(options.str);

    return EXIT_SUCCESS;
}

