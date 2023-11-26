#include<stdio.h>
int main (){
   int d;
   printf("please enter number:");
   int k=0,sum=0;
   while(k<4){
   	scanf("%d",&d);
   	if(d<=0){
   		k=4;
	 }else{
	int v;
	v=d%2;
	switch(v){
	case 1:	sum=sum+d;break;
	case 0: sum=sum+0;break;
	default :break;
		   }
	   k++;}
   }
   printf("sum=%d",sum);
   return 0;
}
