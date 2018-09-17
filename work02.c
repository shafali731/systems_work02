#include<stdio.h>
#include<stdlib.h>

int main(){
unsigned int num = 3000000000;
char * c = & num;

printf("num in hex %x \n", num);

for(int i = 0; i<sizeof(num); i++){
   printf("Byte %d of %x = %hhx\n", i, num, *c);
   c++;
 }

c= &num;

for (int i= 0; i<sizeof(num); i++){
  (*c)++;
  c++;
}
printf("incremented by 1 %x\n", num);
c= &num;

for (int i= 0; i<sizeof(num); i++){
  (*c) +=16;
  c++;
}
printf("incremented by 16 %x\n", num);
return 0;

}
