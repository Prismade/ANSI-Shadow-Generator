#include <stdlib.h>

#include "glyphs.h"

const char *GLYPH_A[] = {" █████╗ ", "██╔══██╗", "███████║", "██╔══██║", "██║  ██║", "╚═╝  ╚═╝", NULL};
const char *GLYPH_B[] = {"██████╗ ", "██╔══██╗", "██████╔╝", "██╔══██╗", "██████╔╝", "╚═════╝ ", NULL};
const char *GLYPH_C[] = {" ██████╗", "██╔════╝", "██║     ", "██║     ", "╚██████╗", " ╚═════╝", NULL};
const char *GLYPH_D[] = {"██████╗ ", "██╔══██╗", "██║  ██║", "██║  ██║", "██████╔╝", "╚═════╝ ", NULL};
const char *GLYPH_E[] = {"███████╗", "██╔════╝", "█████╗  ", "██╔══╝  ", "███████╗", "╚══════╝", NULL};
const char *GLYPH_F[] = {"███████╗", "██╔════╝", "█████╗  ", "██╔══╝  ", "██║     ", "╚═╝     ", NULL};
const char *GLYPH_G[] = {" ██████╗ ", "██╔════╝ ", "██║  ███╗", "██║   ██║", "╚██████╔╝", " ╚═════╝ ", NULL};
const char *GLYPH_H[] = {"██╗  ██╗", "██║  ██║", "███████║", "██╔══██║", "██║  ██║", "╚═╝  ╚═╝", NULL};
const char *GLYPH_I[] = {"██╗", "██║", "██║", "██║", "██║", "╚═╝", NULL};
const char *GLYPH_J[] = {"     ██╗", "     ██║", "     ██║", "██   ██║", "╚█████╔╝", " ╚════╝ ", NULL};
const char *GLYPH_K[] = {"██╗  ██╗", "██║ ██╔╝", "█████╔╝ ", "██╔═██╗ ", "██║  ██╗", "╚═╝  ╚═╝", NULL};
const char *GLYPH_L[] = {"██╗     ", "██║     ", "██║     ", "██║     ", "███████╗", "╚══════╝", NULL};
const char *GLYPH_M[] = {"███╗   ███╗", "████╗ ████║", "██╔████╔██║", "██║╚██╔╝██║", "██║ ╚═╝ ██║", "╚═╝     ╚═╝", NULL};
const char *GLYPH_N[] = {"███╗   ██╗", "████╗  ██║", "██╔██╗ ██║", "██║╚██╗██║", "██║ ╚████║", "╚═╝  ╚═══╝", NULL};
const char *GLYPH_O[] = {" ██████╗ ", "██╔═══██╗", "██║   ██║", "██║   ██║", "╚██████╔╝", " ╚═════╝ ", NULL};
const char *GLYPH_P[] = {"██████╗ ", "██╔══██╗", "██████╔╝", "██╔═══╝ ", "██║     ", "╚═╝     ", NULL};
const char *GLYPH_Q[] = {" ██████╗ ", "██╔═══██╗", "██║   ██║", "██║▄▄ ██║", "╚██████╔╝", " ╚══▀▀═╝ ", NULL};
const char *GLYPH_R[] = {"██████╗ ", "██╔══██╗", "██████╔╝", "██╔══██╗", "██║  ██║", "╚═╝  ╚═╝", NULL};
const char *GLYPH_S[] = {"███████╗", "██╔════╝", "███████╗", "╚════██║", "███████║", "╚══════╝", NULL};
const char *GLYPH_T[] = {"████████╗", "╚══██╔══╝", "   ██║   ", "   ██║   ", "   ██║   ", "   ╚═╝   ", NULL};
const char *GLYPH_U[] = {"██╗   ██╗", "██║   ██║", "██║   ██║", "██║   ██║", "╚██████╔╝", " ╚═════╝ ", NULL};
const char *GLYPH_V[] = {"██╗   ██╗", "██║   ██║", "██║   ██║", "╚██╗ ██╔╝", " ╚████╔╝ ", "  ╚═══╝  ", NULL};
const char *GLYPH_W[] = {"██╗    ██╗", "██║    ██║", "██║ █╗ ██║", "██║███╗██║", "╚███╔███╔╝", " ╚══╝╚══╝ ", NULL};
const char *GLYPH_X[] = {"██╗  ██╗", "╚██╗██╔╝", " ╚███╔╝ ", " ██╔██╗ ", "██╔╝ ██╗", "╚═╝  ╚═╝", NULL};
const char *GLYPH_Y[] = {"██╗   ██╗", "╚██╗ ██╔╝", " ╚████╔╝ ", "  ╚██╔╝  ", "   ██║   ", "   ╚═╝   ", NULL};
const char *GLYPH_Z[] = {"███████╗", "╚══███╔╝", "  ███╔╝ ", " ███╔╝  ", "███████╗", "╚══════╝", NULL};

const char *GLYPH_ONE[] = {" ██╗", "███║", "╚██║", " ██║", " ██║", " ╚═╝", NULL};
const char *GLYPH_TWO[] = {"██████╗ ", "╚════██╗", " █████╔╝", "██╔═══╝ ", "███████╗", "╚══════╝", NULL};
const char *GLYPH_THREE[] = {"██████╗ ", "╚════██╗", " █████╔╝", " ╚═══██╗", "██████╔╝", "╚═════╝ ", NULL};
const char *GLYPH_FOUR[] = {"██╗  ██╗", "██║  ██║", "███████║", "╚════██║", "     ██║", "     ╚═╝", NULL};
const char *GLYPH_FIVE[] = {"███████╗", "██╔════╝", "███████╗", "╚════██║", "███████║", "╚══════╝", NULL};
const char *GLYPH_SIX[] = {" ██████╗ ", "██╔════╝ ", "███████╗ ", "██╔═══██╗", "╚██████╔╝", " ╚═════╝ ", NULL};
const char *GLYPH_SEVEN[] = {"███████╗", "╚════██║", "    ██╔╝", "   ██╔╝ ", "   ██║  ", "   ╚═╝  ", NULL};
const char *GLYPH_EIGHT[] = {" █████╗ ", "██╔══██╗", "╚█████╔╝", "██╔══██╗", "╚█████╔╝", " ╚════╝ ", NULL};
const char *GLYPH_NINE[] = {" █████╗ ", "██╔══██╗", "╚██████║", " ╚═══██║", " █████╔╝", " ╚════╝ ", NULL};
const char *GLYPH_ZERO[] = {" ██████╗ ", "██╔═████╗", "██║██╔██║", "████╔╝██║", "╚██████╔╝", " ╚═════╝ ", NULL};

const char *GLYPH_FULLSTOP[] = {"   ", "   ", "   ", "   ", "██╗", "╚═╝", NULL};
const char *GLYPH_COMMA[] = {"   ", "   ", "   ", "   ", "▄█╗", "╚═╝", NULL};
const char *GLYPH_EXCLAMATION_MARK[] = {"██╗", "██║", "██║", "╚═╝", "██╗", "╚═╝", NULL};
const char *GLYPH_QUESTION_MARK[] = {"██████╗ ", "╚════██╗", "  ▄███╔╝", "  ▀▀══╝ ", "  ██╗   ", "  ╚═╝   ", NULL};
const char *GLYPH_COLON[] = {"   ", "██╗", "╚═╝", "██╗", "╚═╝", "   ", NULL};
const char *GLYPH_SEMICOLON[] = {"   ", "██╗", "╚═╝", "▄█╗", "▀═╝", "   ", NULL};
const char *GLYPH_HYPHEN[] = {"      ", "      ", "█████╗", "╚════╝", "      ", "      ", NULL};
const char *GLYPH_UNDERSCORE[] = {"        ", "        ", "        ", "        ", "███████╗", "╚══════╝", NULL};
const char *GLYPH_OPENING_BRACKET[] = {" ██╗", "██╔╝", "██║ ", "██║ ", "╚██╗", " ╚═╝", NULL};
const char *GLYPH_CLOSING_BRACKET[] = {"██╗ ", "╚██╗", " ██║", " ██║", "██╔╝", "╚═╝ ", NULL};
const char *GLYPH_OPENING_TRIANGULAR_BRACKET[] = {"  ██╗", " ██╔╝", "██╔╝ ", "╚██╗ ", " ╚██╗", "  ╚═╝", NULL};
const char *GLYPH_CLOSING_TRIANGULAR_BRACKET[] = {"██╗  ", "╚██╗ ", " ╚██╗", " ██╔╝", "██╔╝ ", "╚═╝  ", NULL};
const char *GLYPH_OPENING_SQUARE_BRACKET[] = {"███╗", "██╔╝", "██║ ", "██║ ", "███╗", "╚══╝", NULL};
const char *GLYPH_CLOSING_SQUARE_BRACKET[] = {"███╗", "╚██║", " ██║", " ██║", "███║", "╚══╝", NULL};
const char *GLYPH_AT_SIGN[] = {" ██████╗ ", "██╔═══██╗", "██║██╗██║", "██║██║██║", "╚█║████╔╝", " ╚╝╚═══╝ ", NULL};
const char *GLYPH_HASH[] = {" ██╗ ██╗ ", "████████╗", "╚██╔═██╔╝", "████████╗", "╚██╔═██╔╝", " ╚═╝ ╚═╝ ", NULL};
const char *GLYPH_DOLLAR_SIGN[] = {"▄▄███▄▄·", "██╔════╝", "███████╗", "╚════██║", "███████║", "╚═▀▀▀══╝", NULL};
const char *GLYPH_PERCENT[] = {"██╗ ██╗", "╚═╝██╔╝", "  ██╔╝ ", " ██╔╝  ", "██╔╝██╗", "╚═╝ ╚═╝", NULL};
const char *GLYPH_CIRCUMFLEX[] = {" ███╗ ", "██╔██╗", "╚═╝╚═╝", "      ", "      ", "      ", NULL};
const char *GLYPH_AMPERSAND[] = {"   ██╗   ", "   ██║   ", "████████╗", "██╔═██╔═╝", "██████║  ", "╚═════╝  ", NULL};
const char *GLYPH_ASTERISC[] = {"      ", "▄ ██╗▄", " ████╗", "▀╚██╔▀", "  ╚═╝ ", "      ", NULL};
const char *GLYPH_SLASH[] = {"    ██╗", "   ██╔╝", "  ██╔╝ ", " ██╔╝  ", "██╔╝   ", "╚═╝    ", NULL};
const char *GLYPH_SPACE[] = {"        ", "        ", "        ", "        ", "        ", "        ", NULL};
const char *GLYPH_UNKNOWN[] = {"", "", "", "", "", "", NULL};

const short GLYPH_HEIGHT = 6;

const char **chtogl(char c) {
    switch (c) {
    case 'a':
        return GLYPH_A;
    case 'b':
        return GLYPH_B;
    case 'c':
        return GLYPH_C;
    case 'd':
        return GLYPH_D;
    case 'e':
        return GLYPH_E;
    case 'f':
        return GLYPH_F;
    case 'g':
        return GLYPH_G;
    case 'h':
        return GLYPH_H;
    case 'i':
        return GLYPH_I;
    case 'j':
        return GLYPH_J;
    case 'k':
        return GLYPH_K;
    case 'l':
        return GLYPH_L;
    case 'm':
        return GLYPH_M;
    case 'n':
        return GLYPH_N;
    case 'o':
        return GLYPH_O;
    case 'p':
        return GLYPH_P;
    case 'q':
        return GLYPH_Q;
    case 'r':
        return GLYPH_R;
    case 's':
        return GLYPH_S;
    case 't':
        return GLYPH_T;
    case 'u':
        return GLYPH_U;
    case 'v':
        return GLYPH_V;
    case 'w':
        return GLYPH_W;
    case 'x':
        return GLYPH_X;
    case 'y':
        return GLYPH_Y;
    case 'z':
        return GLYPH_Z;

    case '1':
        return GLYPH_ONE;
    case '2':
        return GLYPH_TWO;
    case '3':
        return GLYPH_THREE;
    case '4':
        return GLYPH_FOUR;
    case '5':
        return GLYPH_FIVE;
    case '6':
        return GLYPH_SIX;
    case '7':
        return GLYPH_SEVEN;
    case '8':
        return GLYPH_EIGHT;
    case '9':
        return GLYPH_NINE;
    case '0':
        return GLYPH_ZERO;

    case '.':
        return GLYPH_FULLSTOP;
    case ',':
        return GLYPH_COMMA;
    case '!':
        return GLYPH_EXCLAMATION_MARK;
    case '?':
        return GLYPH_QUESTION_MARK;
    case ':':
        return GLYPH_COLON;
    case ';':
        return GLYPH_SEMICOLON;
    case '-':
        return GLYPH_HYPHEN;
    case '_':
        return GLYPH_UNDERSCORE;
    case '(':
        return GLYPH_OPENING_BRACKET;
    case ')':
        return GLYPH_CLOSING_BRACKET;
    case '<':
        return GLYPH_OPENING_TRIANGULAR_BRACKET;
    case '>':
        return GLYPH_CLOSING_TRIANGULAR_BRACKET;
    case '{':
        return GLYPH_OPENING_SQUARE_BRACKET;
    case ']':
        return GLYPH_CLOSING_SQUARE_BRACKET;
    case '@':
        return GLYPH_AT_SIGN;
    case '#':
        return GLYPH_HASH;
    case '$':
        return GLYPH_DOLLAR_SIGN;
    case '%':
        return GLYPH_PERCENT;
    case '^':
        return GLYPH_CIRCUMFLEX;
    case '&':
        return GLYPH_AMPERSAND;
    case '*':
        return GLYPH_ASTERISC;
    case '/':
        return GLYPH_SLASH;
    case ' ':
        return GLYPH_SPACE;
    default:
        return GLYPH_UNKNOWN;
    }
}

