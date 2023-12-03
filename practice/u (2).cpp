#include<stdio.h>
float fact(int n){
	float c=1,result;
	for(int k=1;k<=n;k++){
		c=c*k;
	}result=1.0/c;
	return result;
}
int main(){
	printf("enter n:");
	int n;
	scanf("%d",&n);
	double e=0,k=0;
	while(k<n){
		e=e+fact(k);
		k++;
	}
	printf("%.4lf",e);
}
