#include <stdio.h>

#include "ansi_colors.h"

#define DO_TEST(C)                        \
    do {                                  \
        printf(C "testing line using " #C); \
        puts(RESET);                      \
    } while (0);

int main(int argc, char *argv[]) {
    DO_TEST(BOLD);
    DO_TEST(WEAK);
    DO_TEST(HIGHLIGHT);
    DO_TEST(UNDERLINE);
    DO_TEST(BLACK);
    DO_TEST(DARK_RED);
    DO_TEST(DARK_GREEN);
    DO_TEST(DARK_YELLOW);
    DO_TEST(DARK_BLUE);
    DO_TEST(DARK_PINK);
    DO_TEST(DARK_CYAN);
    DO_TEST(BLACK_BG);
    DO_TEST(DARK_RED_BG);
    DO_TEST(DARK_GREEN_BG);
    DO_TEST(DARK_YELLOW_BG);
    DO_TEST(DARK_BLUE_BG);
    DO_TEST(DARK_PINK_BG);
    DO_TEST(DARK_CYAN_BG);
    DO_TEST(GRAY);
    DO_TEST(LIGHT_RED);
    DO_TEST(LIGHT_GREEN);
    DO_TEST(LIGHT_YELLOW);
    DO_TEST(LIGHT_BLUE);
    DO_TEST(LIGHT_PINK);
    DO_TEST(LIGHT_CYAN);
    DO_TEST(LIGHT_GRAY);
    DO_TEST(GRAY_BG);
    DO_TEST(LIGHT_RED_BG);
    DO_TEST(LIGHT_GREEN_BG);
    DO_TEST(LIGHT_YELLOW_BG);
    DO_TEST(LIGHT_BLUE_BG);
    DO_TEST(LIGHT_PINK_BG);
    DO_TEST(LIGHT_CYAN_BG);
    DO_TEST(LIGHT_GRAY_BG);

    return 0;
}
