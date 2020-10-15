#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sub(void);


int main(int argc, char *argv[]) {
		int i;
		for(i=0;i<3;i++) {
			sub();
		}
	
	return 0;
}

void sub(void)
{
 int auto_count=0;
 static int static_count=0; //변수 이름에 오타가 있습니다. 화깅ㄴ해보세요 ^_^ 
 
 auto_count++;
 static_count++;
 printf("auto_count=%d\n", auto_count);
 printf("static_count=%d\n", static_count);
 }
