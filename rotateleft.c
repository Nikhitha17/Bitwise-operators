#include<stdio.h>
#include<stdlib.h>
int main(){
   int number, rotate, Msb, size;
   printf("Enter any number:");
   scanf("%d",&number);
   printf("Enter number of rotations:\n");
   scanf("%d",&rotate);
   size = sizeof(int) * 8;
   rotate %= size;
   while(rotate--){
      Msb = (number >> size) & 1;
      number = (number << 1) | Msb;
   }
   printf("After Left rotation the value is = %d\n",number);
   return 0;
}
