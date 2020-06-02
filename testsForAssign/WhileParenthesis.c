#include <stdio.h>
#include <stdbool.h>



void testParenthesis(){
	int x = 1;
	while(x,(x=1))
		break;
}

int main(){
	return 0;
}
