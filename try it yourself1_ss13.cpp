/* chuong trinh de nhan vao mot chuoi va in ra no
     neu do la chuoi doc xuoi- nguoc deu giong nhau*/


#include<stdio.h>
#include<string.h>
#include<malloc.h>
 int main()
{
	int i,j,n,k=0;
    char *ptr; 
	ptr=(char*)malloc(100*sizeof(char));
	printf("\nNhap vao chuoi: ");
	scanf("%s",ptr);
	n = strlen(ptr);
	
	for(i = 0,j = (n - 1);i < (n/2);i++,j--)
	{
		if (*(ptr + i)==*(ptr + j)){
			k++;
		}
	}
	if (k == (n/2)) {
		printf("chuoi nay la chuoi doc xuoi nguoc deu giong nhau\n");
	}
	else
	{
		printf("chuoi nay la chuoi binh thuong\n");
	}
	return 0;
	}
	
	
	  
