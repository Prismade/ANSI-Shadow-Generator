#define _GNU_SOURCE
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "options.h"
#include "version.h"

const size_t maxtlen = 32;
const size_t maxllen = 240;
const size_t defaultllen = 120;
const char short_options[] = "hvc::";
const struct option long_options[] = {
    {"help", no_argument, NULL, 'h'},
    {"version", no_argument, NULL, 'v'},
    {"center", optional_argument, NULL, 'c'},
    {NULL, 0, NULL, 0}
};

struct asg_options parseopts(int argc, char *argv[]) {
    int opt = 0;
    bool center = false;
    size_t linelen = defaultllen;

    while ((opt = getopt_long(argc, argv, short_options, long_options, NULL)) != -1) {
        switch (opt) {
        case 'h':
            printf("%s %s\n\n", APP_NAME, APP_VERSION);
            printf("USAGE: %s [option] <text>\n\n", APP_NAME);
            printf("OPTIONS:\n");
            printf("%-24s %s\n\n", "  -h, --help", "display this help and exit");
            printf("%-24s %s\n\n", "  -v, --version", "display version information and exit");
            printf("%s\n", "  -c<value>, --center=<value>");
            printf("\t\t\t %s%zu%s%zu%s\n\n", "centers text inside the line of <value> characters (defaults to ", defaultllen, " if no value was passed, max is ", maxllen, ")");
            printf("%-24s %s%zu%s\n\n", "<text>", "Any ASCII text (Unicode is not supported as of now) not longer than ", maxtlen, " characters");
            exit(EXIT_SUCCESS);
        case 'v':
            printf("%s %s\n", APP_NAME, APP_VERSION);
            printf("Copyright (C) %s %s\n", APP_YEAR, APP_AUTHOR);
            printf("License GPLv3: GNU GPL version 3 <https://gnu.org/licenses/gpl.html>\n");
            printf("This is free software: you are free to change and redistribute it.\n");
            printf("There is NO WARRANTY, to the extent permitted by law.\n");
            exit(EXIT_SUCCESS);
        case 'c':
            center = true;
            if (optarg != NULL && strlen(optarg) > 0) {
                size_t optarg_int = atoi(optarg);
                if (optarg_int > 0) {
                    if (optarg_int > maxllen) {
                        fprintf(stderr, "Value \'%s\" for option -c is too big. Max is 240.\n", optarg);
                        exit(EXIT_FAILURE);
                    }
                    linelen = optarg_int;
                } else {
                    fprintf(stderr, "Invalid value \'%s\' passed for option -c\n", optarg);
                    exit(EXIT_FAILURE);
                }
            }
            break;
        default:
            exit(EXIT_FAILURE);
        }
    }

    if (optind < argc) {
        size_t textstrlen = strlen(argv[optind]);
        if (textstrlen > 0) {
            if (textstrlen > maxtlen) {
                fprintf(stderr, "Provided text is too long. It must not be longer than %zu characters\n", maxtlen);
                exit(EXIT_FAILURE);
            }

            char *textstr = strdup(argv[optind]);
            if (textstr == NULL) {
                fprintf(stderr, "Failed to allocate memmory for text copy\n");
                exit(EXIT_FAILURE);
            }

            for (size_t i = 0; i < textstrlen; i += 1) {
                textstr[i] = tolower(argv[optind][i]);
            }

            struct asg_options options = {
                .str = textstr,
                .len = textstrlen,
                .center = center,
                .boundsw = linelen
            };
            return options;
        }
    }

    fprintf(stderr, "No text provided\n");
    exit(EXIT_FAILURE);
}

