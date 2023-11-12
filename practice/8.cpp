#include<stdio.h>
#include<math.h> 
int main(){
	double b;
	int a,n;
	a=1,b=0;
	printf("please enter n:");
	scanf("%d",&n);
	while(a<=n){
		b=sqrt(a)+b;
		a++;
	} 
	printf("sum=%0.2lf",b);
	return 0;
}
