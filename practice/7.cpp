#include<stdio.h>
#include<math.h> 
int main(){
	int n,a,c;
	a=0;
	printf("plese enter n:");
	scanf("%d",&n);
	while(a<=n){
		c=pow(3,a);
		printf("pow(3,%d)=%d\n",n,c);
		a++;
	}
	return 0;
} 
