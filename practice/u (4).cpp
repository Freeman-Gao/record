#include<stdio.h>
#include<math.h>
int main(){
   printf("enter a number :");
	int num;
    scanf("%d",&num);
	int k=0,data[100];
	while(k>=0){
		int c;
		c=num/pow(10,k);
		c=c%10;
		data[k]=c;
		if(c==0){
			break;
		}else{
		k++;}
	}for(k=k-1;k>=0;k--){
		printf("%d",data[k]);
		putchar(' ');
	}
	return 0;
}
