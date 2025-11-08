//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <windows.h>
//
//void home_page() {
//	printf("*************************************\n");
//	printf("***********《欢迎进入游戏》**********\n");
//	printf("*********** >1:start play  **********\n");
//	printf("*********** >2:exit        **********\n");
//	printf("*************************************\n");
//	printf("******  请输入对应选项的数字:>  *****\n") ; 
//}
//
//void game() {
//	int num = rand()%100+1;
//	int guess = 0;
//
//	printf("*******请开始猜数:>*******\n");
//	
//
//	while(1) {
//		scanf("%d", &guess);
//
//		if(guess == num) {
//			printf("恭喜你！！猜对了~\n");
//			break;
//		} else if(guess < num) {
//			printf("猜小了。。\n");
//		} else if(guess > num) {
//			printf("猜大了..\n");
//		}
//
//		Sleep(300);
//		printf("\n\n请重新输入:>\n");
//	}
//
//}
//
//void menu_select() {
//	int x = 0;
//
//	do {
//		fflush(stdin);//如果输入其他字符，避免占用缓冲区 
//		scanf("%d", &x);
//		switch(x) {
//			case 1:
//				game();
//				
//				break;
//			case 2:
//				printf("*****退出成功！*****\n");
//				break;
//			default:
//				printf("\n\n输入不合法！请重新输入\n");
//				break;
//		}
//	} while(!(1==x || 2==x));
//
//}
//
//int main() {
//	home_page();
//	srand((unsigned int) time(NULL));
//	menu_select();
//
//	return 0;
//}
