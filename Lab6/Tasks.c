#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES 

void main()
{
	setlocale(LC_CTYPE, "RUS");

	task2();
	
}

int task1()
{
	int yeas;
	puts("������� ���: ");
	scanf("%d", &yeas);

	if (yeas % 4 == 0 && yeas % 100 != 0 || yeas % 400 == 0)
		printf("��� %d ���������", yeas);
	else
		printf("��� %d �� ���������", yeas);
}

int task2()
{
	/*��� 2.4, f = 1.800*/
	/*��� 8.3, f = 0.769*/

	double x = 0;
	double f = 0;

	puts("������� �������� x: ");
	scanf("%lf", &x);

	f = (x <= 7) ? - 3 * x + 9 : (1 / (x - 7));

	printf("�������� ��������� ����� %.3lf", f);

	

	/*if (x <= 7)
		printf("�������� ��������� ����� %d", -3 * x + 9);
	else
		printf("�������� ��������� ����� %d", (1 / (x - 7)));*/
}