#include <stdio.h>
int main(){
int num,i;
printf("Enter a number to display multiplication table: ");
scanf("%d",&num);
printf("Multiplication Table of %d",num);
for(i=1;i<=10;i++){
printf("\n%d X %d= %d",num,i,num*i);
}
return 0;
}
