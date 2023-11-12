#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double a,k;
	a=0;
	printf("please enter n:");
	scanf("%d",&n);
	for(k=0;k<n;k++){
		a=a+((k+1)/(1+k*2)*pow(-1,k));
	
	}
	printf("sum=%0.3lf",a);
	return 0;
}
