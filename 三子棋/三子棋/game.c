#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//游戏总逻辑代码
void game() {
	srand((unsigned int)time(NULL));

	char arr[ROW][COL] = { 0 };

	InitArray(arr, ROW, COL);
	DisplayBoard(arr, ROW, COL);

	while (1) {
		char WhoWin = 0;

		Player_PutChess(arr, ROW, COL);
		DisplayBoard(arr, ROW, COL);
		if ((WhoWin = IsWin(arr, ROW, COL)) != 'C') {
			if (WhoWin == 'Q') {
				printf("平局\n\n");
			}
			else {
				printf("玩家获胜！！！\n\n");
			}
			break;
		}

		Computer_PutChess(arr, ROW, COL);
		DisplayBoard(arr, ROW, COL);
		if ((WhoWin = IsWin(arr, ROW, COL)) != 'C') {
			if (WhoWin == 'Q') {
				printf("平局\n\n");
			}
			else {
				printf("电脑获胜\n\n");
			}
			break;
		}
	}

}

//数组初始化为空格
void InitArray(char arr[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr[i][j] = ' ';
		}
	}
}

//界面展示
void DisplayBoard(char arr[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", arr[i][j]);

			if(j < col-1)
				printf("|");
		}

		printf("\n");

		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");

				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
		
	}
}

//玩家下棋
void Player_PutChess(char arr[ROW][COL], int row, int col) {
	printf("\n******玩家回合******\n");
	printf("请输入棋子坐标：\n");

	int x = 0, y = 0;

	while (1) {
		scanf("%d %d", &x, &y);

		if (x - 1 < 0 || y - 1 < 0 || x - 1 >= row || y - 1 >= col) {
			printf("棋子坐标非法！请重新输入：\n");
		}
		else if (arr[x - 1][y - 1] != ' ') {
			printf("该位置已有棋子！请重新输入：\n");
		}
		else {
			arr[x - 1][y - 1] = '*';
			break;
		}
	}
}

//电脑下棋
void Computer_PutChess(char arr[ROW][COL], int row, int col) {
	printf("\n******电脑回合******\n");
	Sleep(500);

	while(1)
	{
		int x = rand() % row, y = rand() % col;

		if (arr[x][y] == ' ') {
			arr[x][y] = '#';
			break;
		}
	}

	
}

//判断输赢
	/*玩家获胜：输出‘*’
	电脑获胜：输出‘#’
	平局：输出‘Q’
	继续：输出‘C’*/
char IsWin(char arr[ROW][COL], int row, int col) {

	//判断行
	int i = 0; 
	for (i = 0; i < row; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ') {
			return arr[i][1];
		}
	}

	//判断列
	int j = 0;
	for (j = 0; j < row; j++) {
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[1][j] != ' ') {
			return arr[1][j];
		}
	}

	//判断对角线
	if ((arr[1][1] == arr[0][0] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')||
		(arr[1][1] == arr[1][3] && arr[1][1] == arr[3][1] && arr[1][1] != ' ')){
		return arr[1][1];
	}

	//判断平局还是继续
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (arr[i][j] == ' ') {
				return 'C';
			}
		}
	}

	//都不满足，说明平局
	return 'Q';
}

