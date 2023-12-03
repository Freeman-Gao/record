#include<stdio.h>
#include<math.h>
int main(){
	printf("enter a even number>6:");
	int num;
	scanf("%d",&num);
	if(num%2!=0){
		printf("it's not a even number!");
	}else{
		 for(int k=num-3;k>=2;k--){
		 	int z=2;
		 	while(z<sqrt(k)-1){
		 	  if(k%z==0){break;
			   }else{z++;}
			 }if(z>sqrt(k)-1){
			 	int x=num-k,i;
			 	for(i=2;i<=sqrt(x)+1;i++){
			 	  if(x%i==0){break;
				   }
				 }if(i>sqrt(x)+1){printf("%d=%d+%d\n",num,k,x);
				 break;}
			 }
		 }
	}
	return 0;
}
