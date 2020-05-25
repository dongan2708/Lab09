#include<stdio.h>
main()
{ int var = 500, *ptr_var;
/* var duoc khai bao la so nguyen va ptr_var la con tro chi vao mot so nguyen*/
     ptr_var  = &var;   /*luu dia chi cua var trong prt_var*/
     /*in ra gia tri cua bien (var)va dia chi trong do var la duoc kuu tru*/
     printf("The value %d is stored at address %u:", var,&var);
     /*in gia tri duoc luu tru trong bien ptr(ptr_var) va dia chi noi luu tru ptr_var*/
     printf("\nThe value %u is sored at address: %u", ptr_var, &ptr_var);
     /*in gia tri cua bien (var)va dia chi trong do var duoc luu tru su dung con tro toi bien*/


printf("\nThe value %d is sored at address: %u", *ptr_var, ptr_var);
}
