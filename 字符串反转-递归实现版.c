#include <stdio.h>
#include <string.h>

void reverse_string(char arr[]){
	char len = strlen(arr);	
	
	char tmp = *arr;
	

	*arr = *(arr+len-1);
	*(arr+len-1) = '\0';
		
	if(strlen(arr+1) >= 2)
		reverse_string(arr+1);
		
	*(arr+len-1) = tmp;

}

int main(){
	
	char arr[] = "1234567890";
	printf("%s\n", arr);
	
	reverse_string(arr);
	
	printf("%s", arr);
	return 0;
}
