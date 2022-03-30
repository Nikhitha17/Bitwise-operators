#include<stdio.h>
#include<stdlib.h>
int main(){
   int number,rotate, Lsb, size;
   printf("Enter any number:");
   scanf("%d",&number);
   printf("Enter number of rotations:\n");
   scanf("%d",&rotate);
   size = sizeof(int) * 8;
   rotate %= size;
   while(rotate--){
      Lsb = number & 1;
      number = (number >> 1) &(~(1<<size));
      number=number|(Lsb<<size);
   }
   printf("After right rotation the value is = %d\n",number);
   return 0;
}
