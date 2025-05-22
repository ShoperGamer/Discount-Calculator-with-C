#include <stdio.h> //input/output

int promotion();
int main()
{
    int pro = promotion();
    printf("วันนี้ลด %d บาท \n",pro);

   int price;
   printf("Price = ");
   scanf("%d",&price);

   int total = price - pro ;
   printf("total = %d Bath\n",total);
    return 0;
}

int promotion (){
    return 60;
}
