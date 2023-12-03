#include<stdio.h>
int main(){
	int n,j=1;
	double e=1;
	printf("enter n:");
	scanf("%d",&n);
	for(int k=1;k<n;k++){
		j=j*k;
		e=e+1.0/j;
	}
	printf("%.4lf",e);
}
