#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "options.h"
#include "glyphs.h"

size_t ustrlen(const char * str) {
    size_t count = 0;
    while (*str != '\0') {
        if ((*str & 0xC0) != 0x80) {
            count += 1;
        }
        str += 1;
    }
    return count;
}

void printbounds(const struct asg_options * options) {
    size_t cycles = options->boundsw / options->decorstrlen;
    for (size_t i = 0; i < cycles; i += 1) {
        printf("%s", options->decorstr);
    }
    int remchs = options->boundsw % options->decorstrlen;
    if (remchs != 0) {
        printf("%.*s\n", remchs, options->decorstr);
    } else {
        printf("\n");
    }
}

int main(int argc, char * argv[]) {
    const struct asg_options options = parseopts(argc, argv);

    const char ** res[options.len];
    size_t reslen = 0;
    for (size_t i = 0; i < options.len; i += 1) {
        res[i] = chtogl(options.str[i]);
        reslen += ustrlen(res[i][0]);
    }

    int padding = 0;
    int emptylnw = options.boundsw - options.decorstrlen * 2;
    ;
    if (options.center && reslen < options.boundsw) {
        int freesp = options.boundsw - reslen - options.decorstrlen * 2;
        if (freesp % 2 != 0) {
            freesp -= 1;
        }
        padding = freesp / 2;
    }

    if (options.center) {
        printbounds(&options);
        printf("%s%*s%s\n", options.decorstr, emptylnw, "", options.decorstr);
    }
    for (size_t gline = 0; gline < GLYPH_HEIGHT; gline += 1) {
        if (options.center) {
            printf("%s%*s", options.decorstr, padding, "");
        }
        for (size_t i = 0; i < options.len; i += 1) {
            printf("%s", res[i][gline]);
        }
        if (options.center) {
            int rightpadding = options.boundsw - 2 * options.decorstrlen - reslen - padding;
            printf("%*s%s", rightpadding, "", options.decorstr);
        }
        printf("\n");
    }
    if (options.center) {
        printf("%s%*s%s\n", options.decorstr, emptylnw, "", options.decorstr);
        printbounds(&options);
    }
    free(options.str);
    free(options.decorstr);

    return EXIT_SUCCESS;
}
