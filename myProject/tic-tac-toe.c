#include <stdio.h>

int main()
{
	printf("it is a tic-tac-toe game...\n");
	char players[2][10] = {"Kahan", "Hilag"}, players_sign[2] = {'O', 'X'}, board[3][3] ;
	int i, j, input, player_turn = 0, game_status = 0, is_victory = 0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			board[i][j] = ' '; //initialisng with space 	
		}
	}

	while(game_status < 9 && !is_victory)
	{
		printf("\n                  --%s's turn---\n\n-Enter a box position ... : ", players[ player_turn ]);
		scanf("%d", &input);
		input--;
		if(input<9 && board[input /3][input %3] == ' ')
		{
			board[input /3][input %3] = players_sign[ player_turn ];
			player_turn = !player_turn;
			game_status++;
		}
		else
		{
			printf("invalid input..!!!\n");
		}
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("| %c |", board[i][j]);
			}
			printf("\n---------------\n");
		}
		for(i=0; i<3; i++)
		{
			if(board[i][0] != ' ' && (board[i][0] == board[i][1] && board[i][1] == board[i][2] ) )
			{
				is_victory = 1;
			}
			else if(board[0][i] != ' ' && (board[0][i] == board[1][i] && board[1][i] == board[2][i] ) )
			{
				is_victory = 1;
			}
		}
		if((board[0][0] != ' ' && (board[0][0] == board[1][1] && board[1][1] == board[2][2] )) || (board[0][2] != ' ' && (board[0][2] == board[1][1] && board[1][1] == board[2][0] )))
		{
			is_victory = 1;
		}

	}
	return 0;
}
