#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]) {
	char string[100]; /* khai bao ten */
	int i, n; /* khai bao int */
	printf("\nEnter string: "); /* nhap vao mang ky tu */
	gets(string);
	n = strlen(string) - 1; /* su dung con tro voi ham len */
	for(i = n; i >= 0; i--) /* cau truc vong lap */
	{
		printf("%c", string[i]); /* in ra mang ky tu dao nguoc */
	}

	return 0;
}

