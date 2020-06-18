#include<stdio.h>
#include"calculator.h"
int main(void)
{
	
	int sel = 0;
	int no1 = 0;
	int no2 = 0;
	int result = 0;

	printf("========<메뉴>=======\r\n1.덧셈(addition)\r\n2.뺄셈(subtraction\r\n3.곱셈(multiplication)\r\n4.나눗셈(division)\r\n>> 원하는 메뉴를 선택하세요 :");
	scanf_s("%d", &sel);

	printf("\r\n두개의 숫자를 입력하세요 :");

	scanf_s("%d%d", &no1, &no2);

	

	printf("결과값은 %d입니다.", calculator(sel, no1, no2));

	return 0;
}
