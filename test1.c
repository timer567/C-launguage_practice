#include <stdio.h>

void Swap(int* xp, int* yp){
	printf("进入函数》交换前：xp=%p, yp=%p, a=%d, b=%d\n", xp, yp, *xp, *yp);
	int* s = xp;
	xp = yp;
	yp = s;
	printf("进入函数》交换后：xp=%p, yp=%p, a=%d, b=%d\n", xp, yp, *xp, *yp);
	
}


int main (){
	int a = 10, b = 20;
	printf("交换前：\n a=%d,b=%d\n", a, b);
	printf("&a=%p,&b=%p\n*******************\n", &a, &b);
	Swap(&a, &b);
	printf("交换后：\n a=%d,b=%d\n", a, b);
	printf("&a=%p,&b=%p\n*******************\n", &a, &b);	
	
	return 0;
}
