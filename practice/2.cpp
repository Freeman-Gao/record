#include<stdio.h>
#include<math.h>
int main(){

int a,b,c,d;
   printf("please enter number between 100 and 999\n");
   scanf("%d",&a);
   if(a<=999&&a>=100){

   	b=(a/10)%10,c=a/100,d=a%10;
   	if(a==pow(b,3)+pow(c,3)+pow(d,3)){
   		printf("yes");
   		}else{
		   printf("no");}

 }else{
 	printf("Invalid Invalue");
 }
 return 0;
 }
   
