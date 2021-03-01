#include <stdio.h>
int main()
{
    char board[10][10]
            = {"rnbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c", board[i][j]);
            printf("%s", " ");
        }
        printf("%s", "\n");
    }
    return 0;
}