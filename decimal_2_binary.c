#include <stdio.h>
int main(){
int num,rem,a[50],i=0,j;
printf("Enter decimal number to convert into binary: ");
scanf("%d",&num);
while(num>0){
rem=num % 2;
num=num/2;
a[i]=rem;
i++;
}
for(j=i-1;j>=0;j--){

printf("%d",a[j]);
}
return 0;
}
