#include<stdio.h>
#include"calculator.h"
int main(void)
{
	
	int sel = 0;
	int no1 = 0;
	int no2 = 0;
	int result = 0;

	printf("========<�޴�>=======\r\n1.����(addition)\r\n2.����(subtraction\r\n3.����(multiplication)\r\n4.������(division)\r\n>> ���ϴ� �޴��� �����ϼ��� :");
	scanf_s("%d", &sel);

	printf("\r\n�ΰ��� ���ڸ� �Է��ϼ��� :");

	scanf_s("%d%d", &no1, &no2);

	

	printf("������� %d�Դϴ�.", calculator(sel, no1, no2));

	return 0;
}
