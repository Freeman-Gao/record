#include<stdio.h>
#include<math.h>
int main(){
	printf("enter n<20:");
	int n;
	scanf("%d",&n);
	for(int k=2;k<=n;k++){
		int m,c;
		c=pow(2,k)-1;
	    for(m=2;m<=sqrt(c)+1;m++){
		if(c%m==0){break;
	 }
	 }if(m>sqrt(c)+1){printf("%d\n",c);
	  }
	}
	return 0;
}
 
