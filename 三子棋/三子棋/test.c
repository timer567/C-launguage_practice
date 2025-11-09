#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//注:[中文]-->表示待办代码

int main() {

	int input = 0;

	do {
		menu();
		printf("请输入选项序号：");


		scanf("%d", &input);

		switch (input) {
			case 1:
				printf("\n开始游戏>>\n");
				game();
				break;

			case 0:
				printf("\n********************************************\n");
				  printf("****************成功退出游戏****************\n");
				  printf("********************************************\n");
				break;

			default:
				printf("\n输入非法！请重新输入：\n");
				break;
		}

	} while (input);


	return 0;
}

void menu() {
	printf("**************************************\n");
	printf("************  《三子棋》 *************\n");
	printf("************-------------*************\n");
	printf("************ 1.开始游戏  *************\n");
	printf("************ 0.  退出    *************\n");
	printf("**************************************\n");
}
