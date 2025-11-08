#include <stdio.h>

void Hannio(int n, char a, char b, char c){
	if(n == 1){
		printf("%c -----> %c\n", a, c);
	}
	else{
		Hannio(n-1, a, c, b);
		Hannio(1, a, b, c);
		Hannio(n-1, b, a, c);
	}
}

int main (){
	int n = 0;
	scanf("%d", &n);
	
	Hannio(n, 'A', 'B', 'C');
	
	
	return 0;
} 
