#include<stdio.h>
int main(){
	int k=0,month=2,n,rabbit=1;
	printf("enter number under 10000:");
	scanf("%d",&n);
	while(rabbit<n){
	int amount[10000];
	 if(month<4){
	month++;
	rabbit++;
	amount[k]=rabbit;
	k++;
	}else{
		rabbit=amount[k-2]+amount[k-1];
		amount[k]=rabbit;
		month++;
		k++;
	}
		
	}
	printf("month=%d",month);
}
