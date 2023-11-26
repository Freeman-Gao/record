#include<stdio.h>
int main(){
	printf("please enter a number:");
	int total,n,sum=0;
	scanf("%d",&n);
    if(n==0){total++;
	}else{
	
	while(n>0){
		int a;
    	a=n%10;
    	n=n/10;
    	total++;
    	sum=sum+a;
	}}
	printf("%d %d",total,sum);
	return 0;	
}
