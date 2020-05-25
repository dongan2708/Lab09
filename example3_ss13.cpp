#include<stdio.h>
#include<string.h>

main()
{ 
char a,str[81], *ptr;
printf("\nEnter a sentence:");//nhap mot cau
gets(str);
printf("\nEnter character to search for:");//nhap ky tu de tim kiem
a = getchar();
ptr = strchr(str,a);
/* return pointer to char*/  // tra con tro ve char
printf("\nString starts at address: %u", str);//chuoi bat dau tai dia chi
printf("\nFirst occurrence of the character is at address: %u", ptr);
printf("\nPosition of first occurrence (starting from 0)is: %d", ptr-str);
}





