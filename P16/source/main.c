#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX],ch;
	int b,i=0;
	b = fopen_s(&fptr, "C://Users/ASUS/Desktop/�����y���{�����/hw/HW7/P16/output.txt", "a");
	printf("�п�J�r��A��ENTER�ص�����J:\n");
	while ((ch = getchar()) != '\n' && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}