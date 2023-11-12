#include<stdio.h>
#include<math.h>
double fac(int n){
	int j=1;
	for(int a=2;a<=n;a++){
		j=j*a;
	}
	return j;
}
int main()
{int s=0,n,a=1;
	printf("please enter n:");
	scanf("%d",&n);
	while(a<=n){
		s=s+fac(a);
		a++;
	}
	printf("s=%d",s);
	
return 0;	
}
