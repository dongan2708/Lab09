#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<malloc.h>

int const soluong=2;
int const dodaichuoi=50;
int main()
{
	char tenconvat[soluong];
	char *ptr[soluong][dodaichuoi];
	int i;
	for(i = 0;i<soluong;i++) {
		printf("nhap vao ten con thu %d:", i+1);
		gets(tenconvat[ i ]);
		
	char* temp;
	temp = (char*) malloc (dodaichuoi*sizeof(char));
	strcpy(temp,"s");
	strcat(tenconvat[i],temp);
	
	ptr[i]=tenconvat[i];
}
    printf("\nTen o dang so nhieu ");
     for(i = 0;i<soluong;i++)
{
	printf("\n%s",ptr[i]);
}
	return 0;
}
