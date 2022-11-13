#include <stdio.h>

void init_board(char board[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

int player_input()
{
    int input;
    printf("\nenter a num  : ");
    scanf("%d", &input);
    input--;
    return input;
}

void update_board(int input, char bard[3][3], int game_status, char players_sign[2], int player_turn)
{
    if (bard[input / 3][input % 3] == ' ')
    {
        bard[input / 3][input % 3] = players_sign[player_turn];
        //players_sign[player_turn-1] = 'A';
        game_status = game_status + 1;
        player_turn = (!player_turn);
    }
    else
    {
        printf("invalid input .....\n");
    }

    printf("%d %d\n", game_status, player_turn);
}

void show(char board[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("| %c |", board[i][j]);
        }
        printf("\n———————————————\n");
    }
}

int main()
{
    char player_1[] = "jenish", player_2[] = "viral", players_sign[] = {'O', 'X'};
    char board[3][3];
    int game_status = 0, player_turn = 1;
    init_board(board);
    while (game_status < 9)
    {

        update_board(player_input(), board, game_status, players_sign, player_turn);
        show(board);
    }

    printf("%s vs %s", player_1, player_2);
    return 0;
}
