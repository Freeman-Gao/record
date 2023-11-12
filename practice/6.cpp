#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,k,m,n;
	printf("please enter 100<=m<=n<=999:");
	scanf("%d%d",&m,&n);
	if(m>=100&&m<=n&&n<=999){
		for(k=m;k<=n;k++){
			a=k/100,b=(k/10)%10,c=k%10;
	if(k==pow(a,3)+pow(b,3)+pow(c,3)){
		printf("%d ",k);
	}else { }
	}
	
	}else{
		printf("Invalid Value");}
		return 0;}
